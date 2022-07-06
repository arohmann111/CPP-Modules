/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:00:05 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/06 14:21:48 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string s);
	ClapTrap(ClapTrap &other);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string _name;
	int         _hits;
	int         _energy;
	int         _damage;
};

#endif