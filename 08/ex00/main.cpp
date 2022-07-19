#include "easyfind.hpp"
#include <vector>
#include <array>

int main()
{
	try
	{
		std::cout << "---------- Vector ---------" << std::endl;
		int occur(4);
		std::vector <int> v;
		v.push_back(1);
		v.push_back(4);
		v.push_back(3);
		v.push_back(7);
		std::cout << "Element " << occur <<" found at position : " ;
		std::cout << *easyfind(v, occur) << " (counting from zero) \n" ;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "---------- Array ---------" << std::endl;
		int occur(7);
		std::array<int, 6> arr;
		arr.fill(5);
		std::cout << "Element " << occur <<" found at position : " ;
		std::cout << easyfind(arr, occur) << " (counting from zero) \n" ;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}