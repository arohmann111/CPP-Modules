#include "../include/Base.hpp"
#include <cstdlib>
#include <iostream>
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

Base *generate(void)
{
	switch (std::rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (nullptr);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A ref" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B ref" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C ref" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		Base *p = generate();
		identify(p);
		identify(*p);
	}
	return 0;
}