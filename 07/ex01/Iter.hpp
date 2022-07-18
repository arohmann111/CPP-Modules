#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int len, void (*func)(T &))
{
	if (arr == NULL || func == NULL)
		return ;
	for (int i = 0; i < len; ++i)
		(*func)(arr[i]);
}

#endif