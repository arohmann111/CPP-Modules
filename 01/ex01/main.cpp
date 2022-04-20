/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:32:42 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/20 18:21:58 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *a = zombieHorde(7, "hey");
	int i = 0;
	while (i < 100)
	{
		a[i].announce();
		++i;
	}
	printf("hello\n");
	delete[] a;
	return (EXIT_SUCCESS);
}