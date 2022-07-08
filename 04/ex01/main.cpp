/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:33:59 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 15:10:49 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *a[20];

	for (int i = 0; i < 10; i++)
		a[i] = new Dog();

	for (int i = 10; i < 20; i++)
		a[i] = new Cat();

	// Dog	d;

	// if (1)
	// {
	// 	Dog e;
	// 	e = d;
	// }
	// std::cout << &d._brain << std::endl;

	for (int i = 0; i < 20; i++)
		delete(a[i]);
	
	return 0;
}