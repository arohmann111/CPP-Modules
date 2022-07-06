/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:11 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/06 18:50:06 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap  he("he");
	ScavTrap  na("na");
	ScavTrap  c;

	he.attack("na");
	c.attack("Somting!");
	na.takeDamage(100);
	he.beRepaired(3);
	
	return (0);
}