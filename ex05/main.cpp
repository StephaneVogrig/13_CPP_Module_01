/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:15:32 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/18 22:21:27 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl test;

	std::cout << "test DEBUG" << std::endl;
	test.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "test INFO" << std::endl;
	test.complain("INFO");
	std::cout << std::endl;

	std::cout << "test WARNING" << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;

	std::cout << "test ERROR" << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;

	std::cout << "test OTHER" << std::endl;
	test.complain("OTHER");
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}