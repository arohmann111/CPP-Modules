#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	public:
		class NotAllocatedException : std::exception {
			virtual const char *what() const throw()
			{
				return ("Not allocated!");
			}
		};
		Array(){
			_size = 0;
			_arr = NULL;
		}
		~Array(){ 
			delete[] this->_arr;
		}
		Array(unsigned int n){
			_size = n;
			_arr = new T[n];
			if (_arr == NULL)
				throw NotAllocatedException();
		}
		Array(const Array &other){
			_size = other._size;
			_arr = new T[other._size];
			for (unsigned int i = 0; i < other._size; ++i)
				this->_arr[i] = other._arr[i];
		}
		Array &operator=(const Array &other) {
			_size = other._size;
			_arr = new T[other._size];
			for (unsigned int i = 0; i < other._size; ++i)
				this->_arr[i] = other._arr[i];
			return *this;
		}
		T &operator[](int i) {
			if (i < 0 || static_cast<unsigned int>(i) >= this->_size)
				throw std::out_of_range("Out of Range!");
			return this->_arr[i];
		}
		void	size() const {
			return this->_size;
		}
	private:
		T				*_arr;
		unsigned int	_size;
};

#endif