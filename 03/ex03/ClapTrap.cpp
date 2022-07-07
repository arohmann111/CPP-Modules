/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:16:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 12:55:22 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructors & destructor */
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "noname";
	this->_hits = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(std::string s)
{
	std::cout << "ClapTrap constructor with string is called" << std::endl;
	this->_name = s;
	this->_hits = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hits = other._hits;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return *this;
}

/*member functions*/
void ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hits > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is not able to repair themself!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hits > (int) amount)
		this->_hits -= amount;
	else if (this->_hits > 0)
		this->_hits = 0;
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hits > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " points to repair themself!" << std::endl;
		this->_energy--;
		this->_hits += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is not able to repair themself!" << std::endl;
}

