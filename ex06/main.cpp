/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:15:32 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/20 13:39:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <iostream>
# include "Harl.hpp"

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED "Error:" YELLOW " wrong number of arguments !" RESET << std::endl;
		std::cerr << YELLOW "Usage: "  RESET << argv[0] << " <level>" << std::endl;
		std::cerr << YELLOW "level: DEBUG, INFO, WARNING, ERRROR"  RESET << std::endl;
		return (EXIT_FAILURE);
	}

	Harl harl;
	int i = harl.levelToInt(argv[1]);
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
	}	
	return (EXIT_SUCCESS);
}
