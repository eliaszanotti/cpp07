/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:48 by elias             #+#    #+#             */
/*   Updated: 2023/09/21 16:15:37 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    swap(T &valueA, T &valueB)
{
    T   tmp;

    tmp = valueA;
    valueA = valueB;
    valueB = tmp;
}

template<typename T>
const   T &max(T &valueA, T &valueB)
{
    if (valueA > valueB)
        return (valueA);
    return (valueB);
}

template<typename T>
const   T &min(T &valueA, T &valueB)
{
    if (valueA < valueB)
        return (valueA);
    return (valueB);
}

#endif