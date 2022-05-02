/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:32:36 by arohmann          #+#    #+#             */
/*   Updated: 2022/05/02 16:56:02 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie() {};
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );