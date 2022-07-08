/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:33:36 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 15:08:18 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	this->_brain = new Brain;
	this->_type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	delete(this->_brain);
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator" << std::endl;
	this->_type = other._type;
	*(this->_brain) = *(other._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miauuu..." << std::endl;
}