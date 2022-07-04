/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:16:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/04 17:12:15 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors & Destructor */
Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::~Fixed() { }

/*
	The left-shift operator causes the bits in shift-expression to be shifted 
	to the left by the number of positions specified by additive-expression
*/
Fixed::Fixed(const int val)
{
	this->_value = val << this->_rawBit;
}

Fixed::Fixed(const float val)
{
	this->_value =  roundf(val * (1 << this->_rawBit));
}

/*
	A copy constructor is a member function that initializes an 
	object using another object of the same class.
*/
Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

/*Accessors */
int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/* Operators */
Fixed &Fixed::operator=(const Fixed &other)
{
	this->_value = other._value;
	return *this;
}

/* arithmetic operators */
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed ret;
	ret.setRawBits(this->getRawBits() + other.getRawBits());
	return (ret);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed ret;
	ret.setRawBits(this->getRawBits() - other.getRawBits());
	return (ret);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed ret;
	ret.setRawBits(this->getRawBits() * other.getRawBits());
	return (ret);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed ret;
	ret.setRawBits(this->getRawBits() / other.getRawBits());
	return (ret);
}

/* comparison operators */
bool Fixed::operator<(const Fixed &other) const
{
	return (this->_value < other._value);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}

/* incremennt && decrement */
Fixed &Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed &Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return tmp;
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
	return (this->_value >> this->_rawBit);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a > b) ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? b : a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}
