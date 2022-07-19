#include "Array.hpp"
#include <string>

int main()
{
	Array<int> a(7);

	Array<int> b(5);
	try
	{
		b = a;
		Array<std::string> array(5);

		for (int i = 0; i < 5; i++)
		{
			array[i] = std::string("Hello" + std::to_string(i));
		}

		for (int i = 0; i < 5; i++)
		{
			std::cout << array[i] << std::endl;
		}

		Array<std::string> array2;

		std::cout << array2[100] << std::endl;
		array2 = array;

		for (int i = 0; i < 5; i++)
		{
			std::cout << array2[i] << std::endl;
		}
	}
	catch (std::out_of_range &e)
	{
		std::cerr << "index: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}