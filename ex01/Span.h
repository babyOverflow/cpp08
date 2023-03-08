#include <vector>
class Span
{
public:
	Span();
	Span(unsigned int size);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	typedef std::vector<int>::iterator iterator;
	typedef std::vector<int>::const_iterator const_iterator;

	void addNumber(int number);
	template<typename InputIt>
	void addNumbers(InputIt start, InputIt end)
	{
		unsigned long distance = std::distance(start, end);
	if (distance > mNumbers.capacity() - mNumbers.size())
		throw std::out_of_range("Span addNumbers");
	else
		mNumbers.insert(mNumbers.end(), start, end);
	}

	int shortestSpan() const;
	int longestSpan() const ;

private:
	std::vector<int> mNumbers;
};