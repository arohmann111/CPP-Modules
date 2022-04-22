/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:15:15 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/22 13:51:18 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]\nI love having extra bacon for my
        7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs 
        more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been 
        coming for years whereas you started working here since last month." << std::cout;
}

void Harl::warning(void)
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
