/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:08:46 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 10:43:54 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal &other);
		~Animal();
		
		Animal	&operator=(const Animal &other);
		
		std::string	getType() const;
		virtual void		makeSound() const;
	protected:
		std::string _type;
};

#endif