#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>
#include <string.h>

class Data
{
	public:
		Data();
		Data(std::string s) : _s(s) {}
		Data(const Data &other);
		~Data();

		Data &operator=(const Data &other);
		std::string	getS() const;
	private:
		std::string _s;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif