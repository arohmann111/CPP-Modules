/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:27 by arohmann          #+#    #+#             */
/*   Updated: 2022/05/02 16:56:33 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new Zombie[N];
	Zombie *firstZombie = zombieHorde;
	for (int i = 0; i < N; ++i)
	{
		zombieHorde[i].setName(name);
	}
	return (firstZombie);
}