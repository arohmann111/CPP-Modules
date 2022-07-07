/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:06:48 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 13:06:35 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("clap_noname"), FragTrap(), ScavTrap()
{
	std::cout << "◇ DiamondTrap default constructor called" << std::endl;
	this->_name = "noname";
	this->_hits = FragTrap::_hits;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(std::string s) : ClapTrap(s + "_clap_name"), FragTrap(s), ScavTrap(s)
{
	std::cout << "◇ DiamondTrap constructor with string is called" << std::endl;
	this->_name = s;
	this->_hits = FragTrap::_hits;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "◇ DiamondTrap default destructor called" << std::endl;
}

// /*member functions*/
void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am a DiamondTrap named " << this->_name << std::endl;
}
