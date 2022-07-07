/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:16:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 12:51:23 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* constructors & destructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "▽ ScavTrap default constructor called" << std::endl;
	this->_name = "noname";
	this->_hits = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
	std::cout << "▽ ScavTrap constructor with string is called" << std::endl;
	this->_name = s;
	this->_hits = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
	std::cout << "▽ ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "▽ ScavTrap default destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "▽ ScavTrap copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hits = other._hits;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return *this;
}

/*member functions*/
void ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hits > 0)
	{
		std::cout << "▽ ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "▽ ScavTrap " << this->_name << " is not able to repair themself!" << std::endl;

}

void ScavTrap::guardGate()
{
	std::cout << "▽ ScavTrap" << this->_name << "is now in gate keeper mode" << std::endl;
}
