/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:00:18 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/22 12:05:43 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
	public:
		Weapon() {}
		Weapon(std::string name);
		~Weapon() {}
		std::string getType(void) const;
		void	setType(std::string type);
	private:
		std::string _type;
};