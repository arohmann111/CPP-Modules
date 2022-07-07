/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:16:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 09:44:59 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* constructors & destructor */
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "noname";
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string s) : ClapTrap(s)
{
	std::cout << "FragTrap constructor with string is called" << std::endl;
	this->_name = s;
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << " FragTrap copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hits = other._hits;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return *this;
}

/*member functions*/
void FragTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hits > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "FragTrap " << this->_name << " is not able to repair themself!" << std::endl;

}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap" << this->_name << "wants to high five!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hits > (int) amount)
		this->_hits -= amount;
	else if (this->_hits > 0)
		this->_hits = 0;
	std::cout << "FragTrap " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hits > 0)
	{
		std::cout << "FragTrap " << this->_name << " takes " << amount
		<< " points to repair themself!" << std::endl;
		this->_energy--;
		this->_hits += amount;
	}
	else
		std::cout << "FragTrap " << this->_name << " is not able to repair themself!" << std::endl;
}

