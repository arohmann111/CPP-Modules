/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:33:36 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 10:49:56 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator" << std::endl;
	this->_type = other._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miauuu..." << std::endl;
}