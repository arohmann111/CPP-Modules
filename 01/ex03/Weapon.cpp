/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:06:39 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/21 14:43:58 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

const std::string	Weapon::getType(void)
{
	std::string& typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
