/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:15:22 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 16:02:04 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal &other)
{
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = other;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal assignment operator" << std::endl;
	this->_type = other._type;
	return *this;
}

std::string AAnimal::getType() const
{
	return (_type);
}
