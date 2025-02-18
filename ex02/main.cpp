/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:10:09 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/18 17:48:09 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string>
#include <iostream>

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "memory adress of 'string'    : " << &string << std::endl;
	std::cout << "memory adress of 'stringPTR' : " << stringPTR << std::endl;
	std::cout << "memory adress of 'stringREF' : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "value of the string 'string'    : " << string << std::endl;
	std::cout << "value pointed to by 'stringPTR' : " << *stringPTR << std::endl;
	std::cout << "value pointed to by 'stringREF' : " << stringREF << std::endl;

	return (EXIT_SUCCESS);
}
