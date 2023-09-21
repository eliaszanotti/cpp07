/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:37:08 by elias             #+#    #+#             */
/*   Updated: 2023/09/21 15:07:50 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    {
        int valueA = 42;
        int valueB = 69;
        std::cout << "\e[33m[Before Swap]\e[0m valueA = " << valueA << ", valueB = " << valueB << std::endl;
        swap(valueA, valueB);
        std::cout << "\e[33m[After  Swap]\e[0m valueA = " << valueA << ", valueB = " << valueB << std::endl;
        std::cout << "\e[31m[Max value]\e[0m " << max(valueA, valueB) << std::endl;
        std::cout << "\e[32m[Min value]\e[0m " << min(valueA, valueB) << std::endl;
    }
    std::cout << std::endl;
    {
        int a = 2;
        int b = 3;
        ::swap(a, b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
        std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
        std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    }
    return (0);
}