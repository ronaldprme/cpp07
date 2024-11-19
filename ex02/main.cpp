/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:07:52 by rprocopi          #+#    #+#             */
/*   Updated: 2024/11/19 18:43:53 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL	750

int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int [MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//scope
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << numbers[i] << " ";
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!" << std::endl;
			return (1);
		}
	}
	std::cout << std::endl;
	try
	{
		{
			numbers[-2] = 0;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return (0);
}