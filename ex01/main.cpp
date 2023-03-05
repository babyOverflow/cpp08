#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v;
	v.reserve(10);
	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;
}