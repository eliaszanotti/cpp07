/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:18:16 by elias             #+#    #+#             */
/*   Updated: 2023/09/22 13:27:14 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include <string>
#include "Array.hpp"
#include "Array.tpp"

template <typename T>
void printArray(Array<T> &array)
{
	std::cout << "\e[35m[ARRAY]\e[0m\t ";
	if (array.getSize() == 0)
		std::cout << "\e[34m[]" << std::flush;
    for (size_t i = 0; i < array.getSize(); i++)
		std::cout << "\e[34m[" << array[i] << "]" << std::flush;
    std::cout << "\e[0m" << std::endl;
}

int main(void)
{
	{
		std::cout << "\n------- EMPTY ARRAY -------\n" << std::endl;
		Array<int> empty;
		printArray(empty);
	}
	{
		std::cout << "\n------- INT ARRAY -------\n" << std::endl;
		Array<int> a(10);
		for (int i(0); i < 10; i++)
			a[i] = i;
		printArray(a);
	}
	{
		std::cout << "\n------- STRING ARRAY -------\n" << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "otti";
		printArray(a);
	}
	{
		std::cout << "\n------- COPY & ASSIGNEMENT ARRAY -------\n" << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "saile";
		Array<std::string> b(a);
		b[5] = "otti";
		Array<std::string> c = b;
		c[6] = "lyon";
		printArray(a);
		printArray(b);
		printArray(c);
	}
	{
		std::cout << "\n------- CATCH EXCEPTION -------\n" << std::endl;
		try
		{
			Array<std::string> a(10);
			for (int i(0); i < 11; i++)
				a[i] = "saile otti";
			printArray(a);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}