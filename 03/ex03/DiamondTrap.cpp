/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:06:48 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 15:11:46 by arohmann         ###   ########.fr       */
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

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "◇ DiamondTrap copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hits = other._hits;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return *this;
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
