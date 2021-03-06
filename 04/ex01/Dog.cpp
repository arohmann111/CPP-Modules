/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:27:45 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 15:07:35 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	delete(this->_brain);
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator" << std::endl;
	this->_type = other._type;
	*(this->_brain) = *(other._brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "wuff wuff !!!" << std::endl;
}
