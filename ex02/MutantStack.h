#include <iterator>
#include <memory>
#include <stack>
#include <deque>

template <typename T,
template <typename E, typename Alloc = std::allocator<E> > class Seq = std::deque  >
class MutantStack: public std::stack<T, Seq<T> >
{
	public:
	MutantStack()
		: MutantStack::stack()
	{

	}

	MutantStack(const MutantStack& other)
		: MutantStack::stack(other)
	{}

	MutantStack& operator=(const MutantStack& rhs)
	{
		MutantStack::stack::operator=(rhs);
		return *this;
	}

	~MutantStack()
	{}

	typedef typename Seq<T>::iterator iterator;
	typedef typename Seq<T>::reverse_iterator reverse_iterator;

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}

	reverse_iterator rend()
	{
		return this->c.rend();
	}
};