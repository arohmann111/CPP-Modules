/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:15:01 by arohmann          #+#    #+#             */
/*   Updated: 2022/05/02 16:55:04 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie *a = newZombie("Aaaa");
	randomChump("Beee");
	delete a;
	return (0);
}
