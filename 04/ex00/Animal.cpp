/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:15:22 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 16:44:51 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(Animal &other)
{
	*this = other;
}

Animal::~Animal() {}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return *this;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "*animal sounds*" << std::endl;
}