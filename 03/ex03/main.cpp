/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:11 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 13:02:11 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap  he("he");
	DiamondTrap  na("na");
	DiamondTrap  c;

	he.attack("na");
	c.attack("Somting!");
	na.takeDamage(100);
	he.beRepaired(3);

	c.whoAmI();
	na.whoAmI();
	
	return (0);
}