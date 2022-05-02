/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:27:26 by arohmann          #+#    #+#             */
/*   Updated: 2022/05/02 16:54:15 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string my_replace(std::string search, std::string replace, std::string line)
{
	size_t pos = 0;
	size_t l_search = search.length();
	size_t l_replace = replace.length();
	std::string newLine;
	
	pos = line.find(search);
	while (pos != std::string::npos)
	{
		line.erase(pos, l_search);
		line.insert(pos, replace);
		pos = line.find(search, pos + l_replace);
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong Number of input => <filename> <search> <replace>" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string filename = av[1];
	std::string search = av[2];
	std::string replace = av[3];
	std::string line;
	std::ofstream ofs;
	std::ifstream ifs;
	
	ifs.open(filename);
	if (ifs.is_open())
	{
		ofs.open(filename.append(".replace"));
		while(getline(ifs, line))
		{
			line = my_replace(search, replace, line);
			ofs << line << std::endl;
		}
		ofs.close();
	}
	else
	{
		std::cout << "[ERROR] unable to open file" << std::endl;
		ifs.close();
		return (EXIT_FAILURE);
	}
	ifs.close();
	return (EXIT_SUCCESS);
}
