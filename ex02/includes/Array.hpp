/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/22 12:58:44 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_H
# define ARRAY_CLASS_H

# include <iostream>

template<typename T>
class Array
{
	private:
		size_t	_size;
		T		*_array;

	public:
		// Constructors
		Array();
		Array(size_t size);
		Array(Array const &copy);
		~Array();

		// Operators
		Array	&operator=(Array const &copy);

		// Getters
		size_t	getSize(void) const;

		// Methods
		T	&operator[](unsigned int i) const;

		// Exceptions
		class OutOfBounds: public std::exception {
			public :
				virtual const char	*what( void ) const throw();
		};
};

#endif