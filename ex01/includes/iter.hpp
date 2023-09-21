/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:08:35 by elias             #+#    #+#             */
/*   Updated: 2023/09/21 16:14:44by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, int len, void (*f)(T const &))
{
	for(int i = 0; i < len; i++)
		f(array[i]);
}

template<typename T>
void	print(T const &element)
{
	std::cout << "element: " << element << std::endl;
}

#endif