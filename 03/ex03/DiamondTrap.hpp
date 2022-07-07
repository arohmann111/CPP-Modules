/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:59:56 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 15:12:31 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string s);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &other);
	void attack(const std::string &target);
	void whoAmI();
protected:
	std::string _name;
};

#endif