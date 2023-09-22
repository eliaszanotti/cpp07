/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:34:27 by elias             #+#    #+#             */
/*   Updated: 2023/09/22 13:26:18 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Constructors
template<typename T>
Array<T>::Array()
{
    this->_size = 0;
    this->_array = new T[0];
    std::cout << "\e[32m[INFO]\t\e[0m empty array created" << std::endl;
}

template<typename T>
Array<T>::Array(size_t size)
{
    this->_size = size;
    this->_array = new T[size];
    std::cout << "\e[32m[INFO]\t\e[0m array of size " << size << " created" << std::endl;
}

template<typename T>
Array<T>::Array(Array const &copy)
{
    *this = copy;
    std::cout << "\e[32m[INFO]\t\e[0m array copied" << std::endl;
}

template<typename T>
Array<T>::~Array()
{
    delete [] this->_array;
    std::cout << "\e[31m[INFO]\t\e[0m array deleted" << std::endl;
}

// Operators
template<typename T>
Array<T>&Array<T>::operator=(Array const &copy)
{
    this->_size = copy._size;
    this->_array = new T[this->_size];
    for (size_t i = 0; i < this->_size; i++)
        this->_array[i] = copy._array[i];
    std::cout << "\e[32m[INFO]\t\e[0m assignement operator called" << std::endl;
    return (*this);
}

template<typename T>
size_t  Array<T>::getSize(void) const
{
    return (this->_size);
}

template<typename T>
T   &Array<T>::operator[](unsigned int i) const
{
    if (i >= this->_size)
        throw (Array<T>::OutOfBounds());
    return (this->_array[i]);
}

template <typename T>
const char *Array<T>::OutOfBounds::what(void) const throw()
{
	return ("\e[31m[ERROR]\t\e[0m Out of bounds");
}