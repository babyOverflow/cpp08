#include <vector>
class Span
{
public:
	Span();
	Span(unsigned int size);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void addNumber(int number);

private:
	std::vector<int> mNumbers;
};