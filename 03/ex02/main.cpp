/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:11 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 09:47:23 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap  he("he");
	FragTrap  na("na");
	FragTrap  c;

	he.attack("na");
	c.attack("Somting!");
	na.takeDamage(100);
	he.beRepaired(3);
	
	return (0);
}