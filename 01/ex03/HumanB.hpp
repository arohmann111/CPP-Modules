/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:01:33 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/21 17:48:34 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB() {}
		HumanB(std::string name);
		~HumanB() {}
		void attack(void);
		void setWeapon(Weapon &weapon);
	private:
		std::string _name;
		Weapon *_weapon;
};