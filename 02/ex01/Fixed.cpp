/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:16:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/04 14:31:43 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors & Destructor */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
	The left-shift operator causes the bits in shift-expression to be shifted 
	to the left by the number of positions specified by additive-expression
*/
Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (val << Fixed::_rawBit);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value =  roundf(val * (1 << Fixed::_rawBit));
}

/*
	A copy constructor is a member function that initializes an 
	object using another object of the same class.
*/
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/*Accessors */
int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/* Operators */
void Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
}

/* nonmember operators */
std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

/* Member functions */

float Fixed::toFloat() const
{
	return ((float)this->_value / (float)(1 << this->_rawBit));
}

int Fixed::toInt() const
{
	return (this->_value / (1 << this->_rawBit));
}

