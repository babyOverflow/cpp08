#include <iostream>
#include <vector>
#include <deque>

#include "easyfind.h"

int main()
{

	std::deque<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	std::deque<int>::iterator it = easyfind(v, 4);
	std::deque<int>::iterator itbegin = v.begin();
	// std::deque<int>::iterator itend = v.end();

	std::deque<int>::iterator itfind = std::find(v.begin(), v.end(), 2);
	
	std::cout << (int)(itfind  == it) << std::endl;
	for (int i = 0; itbegin != it ; itbegin++)
	{
		std::cout << ++i << ' ';
	}
}