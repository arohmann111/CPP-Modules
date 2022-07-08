/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:15:22 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 10:46:59 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator" << std::endl;
	this->_type = other._type;
	return *this;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{}