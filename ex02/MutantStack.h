#include <iterator>
#include <memory>
#include <stack>
#include <deque>

template <typename T,
template <typename E, typename Alloc = std::allocator<E> > class Seq = std::deque  >
class MutantStack: public std::stack<T, Seq<T> >
{
	public:
	typedef typename Seq<T>::iterator iterator;

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}
};