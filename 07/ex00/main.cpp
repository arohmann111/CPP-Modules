#include "Whatever.hpp"

int main()
{
	int a = 10;
	int b = 15;

	std::cout << max<int>(a, b) << std::endl;

	float c = 10.67f;
	float d = 15.8f;

	std::cout << max<float>(c, d) << std::endl;

	char f = 'f';
	char e = 'e';

	swap<char>(f, e);

	std::cout << "f: " << f << " e: " << e << std::endl;

	return 0;
}