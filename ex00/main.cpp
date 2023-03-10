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
	std::deque<int>::iterator it = easyfind(v, 5);
	std::deque<int>::iterator itfind = std::find(v.begin(), v.end(), 5);
	
	std::cout << (int)(itfind  == it) << ' ' << *it << std::endl;

	std::deque<int>::iterator it6 = easyfind(v, 6);
	std::deque<int>::iterator itfind6 = std::find(v.begin(), v.end(), 6);
	std::cout << (int)(itfind6  == it6) << ' ' << *it6 << std::endl;

	std::deque<int>::iterator it7 = easyfind(v, 6);
	std::cout << (int)(itfind6  == it7) << ' ' << *it6 << std::endl;
}