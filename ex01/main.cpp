#include <exception>
#include <vector>
#include <iostream>
#include "Span.h"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;


try
{
	Span sp2 = Span(4);
	sp2.addNumber(6);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
catch (std::exception &e)
{
	std::cout << e.what() << std::endl;
}

try
{
	Span sp2 = Span(5);
	sp2.addNumber(6);
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
}
catch (std::exception &e)
{
	std::cout << e.what() << std::endl;
}

try
{
	Span sp2 = Span(2);
	sp2.addNumber(14);
	sp2.addNumber(6);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
catch (std::exception &e)
{
	std::cout << e.what() << std::endl;
}

try
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(100);
	Span sp2 = Span(100);
	sp2.addNumbers(v.begin(), v.end());
		std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
catch (std::exception &e)
{
	std::cout << e.what() << std::endl;
}
try
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(100);
	Span sp2 = Span(2);
	sp2.addNumbers(v.begin(), v.end());
		std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
catch (std::exception &e)
{
	std::cout << e.what() << std::endl;
}


return 0;
}