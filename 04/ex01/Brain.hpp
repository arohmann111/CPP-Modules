/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:09:41 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 11:42:07 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string.h>
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain &other);
		~Brain();

		Brain &operator=(const Brain &other);
	protected:
		std::string _ideas[100];
};
#endif