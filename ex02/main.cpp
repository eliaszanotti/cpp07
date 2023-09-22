/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:18:16 by elias             #+#    #+#             */
/*   Updated: 2023/09/22 12:56:14 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include <string>
#include "Array.hpp"
#include "Array.tpp"

template <typename T>
void printArray(Array<T> &a)
{
    for (unsigned int i = 0; i < a.getSize(); i++)
    {
        if (i != a.getSize() - 1)
            std::cout << a[i] << ", ";
        else
            std::cout << a[i];
    }
    std::cout << std::endl;
}

int main(void)
{
	{
		std::cout << "\n------- EMPTY ARRAY -------\n" << std::endl;
		Array<int> empty;
		std::cout << "Empty: ";
		printArray(empty);
	}
	{
		std::cout << "\n------- INT ARRAY -------\n" << std::endl;
		Array<int> a(10);
		for (int i(0); i < 10; i++)
			a[i] = i;
		std::cout << "Int: ";
		printArray(a);
	}
	{
		std::cout << "\n------- STRING ARRAY -------\n" << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "gtr";
		std::cout << "String: ";
		printArray(a);
	}
	{
		std::cout << "\n------- COPY & ASSIGNEMENT ARRAY -------\n" << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "gtr";
		Array<std::string> b(a);
		b[5] = "nissan";
		Array<std::string> c = b;
		c[6] = "porsche";
		std::cout << "String a: ";
		printArray(a);
		std::cout << "String b: ";
		printArray(b);
		std::cout << "String c: ";
		printArray(c);
	}
	{
		std::cout << "\n------- CATCH EXCEPTION -------\n" << std::endl;
		try
		{
			Array<std::string> a(10);
			for (int i(0); i < 11; i++)
				a[i] = "gtr";
			std::cout << "String: ";
			printArray(a);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}