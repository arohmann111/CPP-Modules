/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:32:29 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/07 15:53:56 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string.h>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &other);
		~Cat();

		Cat	&operator=(const Cat &other);

		void	makeSound();
	protected:
};

#endif