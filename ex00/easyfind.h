#include <algorithm>
#include <memory>
#include <vector>

template <typename T,
template <typename E, typename ALOC = std::allocator<E> > class  Container>
typename Container<T>::iterator easyfind(Container<T>& container, int i)
{
	return std::find(container.begin(), container.end(), i);
}