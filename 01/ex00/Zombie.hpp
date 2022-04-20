#pragma once
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie
{
	public:
		Zombie() {};
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );