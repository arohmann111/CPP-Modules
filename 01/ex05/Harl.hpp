/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:15:19 by arohmann          #+#    #+#             */
/*   Updated: 2022/04/25 16:20:48 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {
    public:
        Harl() {}
        ~Harl() {}
        void complain(std::string level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};