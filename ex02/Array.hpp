/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:09:25 by rprocopi          #+#    #+#             */
/*   Updated: 2024/11/19 18:15:31 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &a);
		
		~Array(void);
		
		class IndexOutOfBounds: public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return ("Error: index out of bounds");
				}
		};
		
		Array			&operator=(const Array &a);
		T				&operator[](const int n);
		unsigned int	size(void);
};

#endif