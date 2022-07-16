#include "Data.hpp"

Data::Data() {}

Data::Data(const Data &other)
{
	*this = other;
}

Data::~Data() {}

Data &Data::operator=(const Data &other)
{
	(void)other;
	return (*this);
}

std::string	Data::getS() const
{
	return (this->_s);
}


uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}
