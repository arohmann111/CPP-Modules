/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:11 by arohmann          #+#    #+#             */
/*   Updated: 2022/07/06 18:27:27 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point d(-1, -2);
	Point e(1, 1);
	Point f(2, 5);
	Point p(5, 0);
	
	
	std::cout << std::endl << (bsp(d, e, f, p)? "YES":"NO") << std::endl;
	
	Point   a(0.0f, 0.0f);
	Point   b(0.0f, 3.0f);
	Point   c(3.0f, 0.0f);
	std::cout << std::endl;
	std::cout << "#####################################" << std::endl;
	std::cout << "Test Triangle P1(0/0) P2(0/3) P3(3/0)" << std::endl;
	std::cout << "#####################################" << std::endl;
	std::cout << std::endl;
	std::cout << "Point (0.5/0.5) ---> Part of Triangle" << std::endl;
	Point   point(0.5f, 0.5f);
	if (bsp(a, b, c, point))
	    std::cout << "[x] Correct result" << std::endl;
	else
	    std::cout << "[ ] Incorrect result" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "Point (0.0/0.0) ---> Not Part of Triangle" << std::endl;
	point  = Point(0.0f, 0.0f);
	if (!bsp(a, b, c, point))
	    std::cout << "[x] Correct result" << std::endl;
	else
	    std::cout << "[ ] Incorrect result" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "Point (7.0/7.0) ---> Not Part of Triangle" << std::endl;
	point = Point(7.0f, 7.0f);
	if (!bsp(a, b, c, point))
	    std::cout << "[x] Correct result" << std::endl;
	else
	    std::cout << "[ ] Incorrect result" << std::endl;
	std::cout << std::endl;
	return (0);
}