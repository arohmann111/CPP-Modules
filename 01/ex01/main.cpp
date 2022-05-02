/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:32:42 by arohmann          #+#    #+#             */
/*   Updated: 2022/05/02 16:54:51 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *a = zombieHorde(7, "hey");
	int i = 0;
	while (i < 7)
	{
		a[i].announce();
		++i;
	}
	delete[] a;
	return (0);
}
