/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:13:46 by arohmann          #+#    #+#             */
/*   Updated: 2022/05/02 16:57:38 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main()
{
	Harl karen;

	std::cout << "---------------------" << std::endl;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	std::cout << "---------------------" << std::endl;
	karen.complain("");
	karen.complain("debug");
	karen.complain("INFNO");
	return (0);
}
