#include <exception>
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
		throw std::out_of_range("Span");
	mNumbers.push_back(number);
}

int Span::shortestSpan() const
{
	if (mNumbers.size() < 2)
		throw std::out_of_range("Span");
	std::vector<int> tmp(mNumbers);
	std::sort(tmp.begin(), tmp.end());
	
	int diff = std::numeric_limits<int>::max();
	iterator it = tmp.begin();
	while (it != tmp.end())
	{
		int a = *it;
		int b = *(++it);
		if (a - b < diff)
			diff = a - b;
	}
	return diff;
}

int Span::longestSpan() const
{
	std::vector<const int>::iterator itmax = std::max_element(mNumbers.begin(), mNumbers.end());
	std::vector<const int>::iterator itmin = std::max_element(mNumbers.begin(), mNumbers.end());
	return (*itmax - *itmin);
}
