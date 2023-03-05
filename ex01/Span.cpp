#include "Span.h"
#include <exception>
#include <stdexcept>

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
