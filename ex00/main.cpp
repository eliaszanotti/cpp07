/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:37:08 by elias             #+#    #+#             */
/*   Updated: 2023/09/21 14:59:32 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int valueA = 42;
    int valueB = 69;
    std::cout << "\e[33m[Before Swap]\e[0m valueA = " << valueA << ", valueB = " << valueB << std::endl;
    swap(valueA, valueB);
    std::cout << "\e[33m[After  Swap]\e[0m valueA = " << valueA << ", valueB = " << valueB << std::endl;
    std::cout << "\e[31m[Max value]\e[0m " << max(valueA, valueB) << std::endl;
    std::cout << "\e[32m[Min value]\e[0m " << min(valueA, valueB) << std::endl;
    return (0);
}