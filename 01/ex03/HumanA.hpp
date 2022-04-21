/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:30:35 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/21 17:48:57 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weap) : _name(name), _weapon(weap) {}
		~HumanA() {}
		void attack(void);
	private:
		std::string _name;
		Weapon &_weapon;
};