/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:17:17 by rprocopi          #+#    #+#             */
/*   Updated: 2024/11/18 16:50:20 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T&))
{
    for (size_t i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T>
void printData(T &data)
{
    std::cout << data << " ";
}
