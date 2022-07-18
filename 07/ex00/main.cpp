#include "Whatever.hpp"

int main()
{
	std::cout << "\033[0;32mMY TEST\033[0;37m" << std::endl;
	int x = 10;
	int y = 15;

	std::cout << "max called with: " << x << " and " << y << std::endl;
	std::cout << max<int>(x, y) << std::endl;

	float v = 10.67f;
	float w = 15.8f;

	std::cout << "max called with: " << v << " and " << w << std::endl;
	std::cout << max<float>(v, w) << std::endl;

	std::cout << "min called with: " << v << " and " << w << std::endl;
	std::cout << min<float>(v, w) << std::endl;

	char f = 'f';
	char e = 'e';

	swap<char>(f, e);

	std::cout << "swap called with: " << f << " and " << e << std::endl;
	std::cout << "f: " << f << " e: " << e << std::endl;


	std::cout << "\033[0;32mORIGINAL TEST\033[0;37m" << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}