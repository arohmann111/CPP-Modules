/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:06:39 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/22 12:05:51 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

std::string	Weapon::getType(void) const
{
	const std::string& typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
