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
	typedef std::vector<int>::iterator const_iterator;

	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const ;

private:
	std::vector<int> mNumbers;
};