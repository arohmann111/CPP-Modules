/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:33:36 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 15:45:45 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
}

Cat::Cat(Cat &other)
{
	*this = other;
}

Cat::~Cat() {}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	return *this;
}

void Cat::makeSound()
{
	std::cout << "miauuu..." << std::endl;
}