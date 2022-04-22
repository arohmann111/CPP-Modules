/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:27:26 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/22 13:05:23 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int my_replace(char **av)
{
    std::string filename = av[1];
    std::string search = av[2];
    std::string replace = av[3];
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (EXIT_FAILURE);
    if (my_replace(av))
        return(EXIT_FAILURE);
    return (EXIT_SUCCESS);
}