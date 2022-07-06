/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:11 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/06 14:58:40 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap  he("he");
	ClapTrap  na("na");
	ClapTrap  c;

	he.attack("na");
	c.attack("Somting!");
	na.takeDamage(100);
	he.beRepaired(3);
	
	return (0);
}