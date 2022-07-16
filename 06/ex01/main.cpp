#include "Data.hpp"

int main()
{
	Data	a("hello");

	std::cout << a.getS() << std::endl;

	uintptr_t uintptr = serialize(&a);

	std::cout << "-----------" << std::endl;
	std::cout << "uintptr adress" << &uintptr << std::endl;
	std::cout << "data adress" << &a << std::endl;
	std::cout << "-----------" << std::endl;

	Data *_a = deserialize(uintptr);

	std::cout << _a->getS() << std::endl;

}