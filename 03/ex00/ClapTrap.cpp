/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:16:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/05 15:58:55 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructors & destructor */
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hits = 10;
	this->_energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(std::string s)
{
	std::cout << "Constructor with string is called" << std::endl;
	this->_name = s;
	this->_hits = 10;
	this->_energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

void ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hits = other._hits;
	this->_energy = other._energy;
	this->_damage = other._damage;
}

