#include <iostream>
#include <exception>
#include <iterator>
#include <stdexcept>
#include <algorithm>
#include <limits>
#include "Span.h"

Span::Span()
	: mNumbers()
{
}

Span::Span(unsigned int size)
{
	mNumbers.reserve(size);
}

Span::Span(const Span& other)
	: mNumbers(other.mNumbers)
{
}

Span& Span::operator=(const Span &other)
{
	mNumbers = other.mNumbers;
	return *this;
}

Span::~Span()
{}

void Span::addNumber(int number)
{
	if (mNumbers.size() == mNumbers.capacity())
		throw std::out_of_range("Span addNumber ");
	mNumbers.push_back(number);
}



int Span::shortestSpan() const
{
	if (mNumbers.size() < 2)
		throw std::out_of_range("Span ShortsetSpan");

	std::vector<int> tmp(mNumbers);
	std::sort(tmp.begin(), tmp.end());
	
	int diff = std::numeric_limits<int>::max();
	iterator it = tmp.begin();
	do
	{
		int a = *it;
		int b = *(++it);
		if (std::abs(b - a) < diff)
			diff = std::abs(b - a);
	} while (it != (tmp.end() - 1));
	return diff;
}

int Span::longestSpan() const
{
	if (mNumbers.size() < 2)
		throw std::out_of_range("Span longestSpan");
	return (
		*std::max_element(mNumbers.begin(), mNumbers.end())
		- *std::min_element(mNumbers.begin(), mNumbers.end()));
}
