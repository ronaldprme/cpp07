/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:07:52 by rprocopi          #+#    #+#             */
/*   Updated: 2024/11/22 17:44:42 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Array.tpp"

#define MAX_VAL	20


int main(int, char **)
{
	//Inicializacao dos Arrays
	Array<int> numbers(MAX_VAL);
	int *mirror = new int [MAX_VAL];
	
	Array<std::string> stringArray(4);
	Array<char> charArray(4);
	
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//scope
	{
		std::cout << "Number size: " << numbers.size() << std::endl;
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		std::cout << "Test size  : " << test.size() << std::endl;
	}
	
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << numbers[i] << " \n";
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!" << std::endl;
			return (1);
		}
	}
	
	try
	{
		numbers[1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	try
	{
		numbers[MAX_VAL - 1] = 50;
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

    stringArray[0] = "ousar ";
    stringArray[1] = "sonhar, ";
    stringArray[2] = "ousar ";
    stringArray[3] = "realizar ";

	Array<std::string> lema = stringArray;
	Array<std::string> tmp = lema;
	Array<std::string> test(tmp);
	
	try
	{
		for (unsigned int i = 0; i < 4; i++)
			std::cout<< test[i] ;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl;
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n" << test.size() << std::endl;
	
	return (0);
}