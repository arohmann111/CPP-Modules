/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:52:58 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/25 20:10:47 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl karen;
    std::string level;
    
    if (ac != 2)
    {
        std::cout << "Not enough" 
        << "arguments! => ./harlfilter <level>"
        << std::endl;
        return (1);
    }
    
    level = av[1];
    karen.complain(level);
    return (0);
}