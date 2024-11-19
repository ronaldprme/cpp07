/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:51 by rprocopi          #+#    #+#             */
/*   Updated: 2024/11/18 16:53:38 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void inc(int &i) {
    i++;	
}

int main(void) {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.2, 3.3, 4.3, 56.4, 43.5};
	double doubleArray[] = {1.232312, 23.323231, 32.3212, 42.42424242};
    char charArray[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    const char *charPtrArray[] = {"ousar", "sonhar", "ousar", "realizar"};
    std::string stringArray[] = {"ousar", "sonhar", "ousar", "realizar"};

    iter(intArray, 3, printData);
    std::cout << std::endl;
    iter(floatArray, 5, printData);
    std::cout << std::endl;
	iter(doubleArray, 5, printData);
    std::cout << std::endl;
    iter(charArray, 6, printData);
    std::cout << std::endl;
    iter(charPtrArray, 2, printData);
    std::cout << std::endl;
    iter(stringArray, 3, printData);
    std::cout << std::endl;

    return 0;
}