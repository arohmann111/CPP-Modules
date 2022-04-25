/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:15:15 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/25 20:08:55 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = -1;
	while (++i < 4)
	{
		if (complains[i] == level)
            break;
	}
	switch (i)
	{
		case 0:		
			this->debug();
		case 1:		
			this->info();
		case 2:		
			this->warning();
		case 3:		
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					  << std::endl;	
			break;
	}
	
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::cout;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
