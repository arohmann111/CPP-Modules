/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:32:42 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/21 12:53:03 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *a = zombieHorde(7, "hey");
	int i = 0;
	while (i < 7)
	{
		a[i].announce();
		++i;
	}
	delete[] a;
	return (EXIT_SUCCESS);
}
