/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:08:46 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/08 16:05:05 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal &other);
		virtual ~AAnimal();
		
		AAnimal	&operator=(const AAnimal &other);
		
		std::string		getType() const;
		virtual void	makeSound() const = 0;
	protected:
		std::string _type;
};

#endif