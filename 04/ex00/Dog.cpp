/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:27:45 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 15:44:58 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
}

Dog::Dog(Dog &other)
{
	*this = other;
}

Dog::~Dog() {}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	return *this;
}

void Dog::makeSound()
{
	std::cout << "wuff wuff !!!" << std::endl;
}
