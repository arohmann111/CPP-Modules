#include "Iter.hpp"

template<typename T>
void	plusFive(T &i)
{
	i += 5;
}

int main()
{
	int arr[10];

	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i;
	}
	std::cout << "\033[0;32mBEFORE\033[0;37m" << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		std::cout << arr[i] << " ";
	}

	iter(arr, 10, plusFive);

	std::cout << "\n\033[0;32mAFTER\033[0;37m" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << arr[i] << " ";
	}

	float a[5] = { 1.62f, 8.123f, 2.87f, 9.12f, 1.76f };

	std::cout << "\n\033[0;32mBEFORE\033[0;37m" << std::endl;

	for (int i = 0; i < 5; ++i)
	{
		std::cout << a[i] << " ";
	}

	iter(a, 5, plusFive);

	std::cout << "\n\033[0;32mAFTER\033[0;37m" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << a[i] << " ";
	}
	return (0);
}