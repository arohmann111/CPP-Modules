/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:00:18 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/21 14:42:57 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
	public:
		Weapon() {}
		Weapon(std::string name);
		~Weapon() {}
		const std::string getType(void);
		void	setType(std::string type);
	private:
		std::string _type;
};