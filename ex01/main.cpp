/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:11:02 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/20 15:45:46 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include "Zombie.hpp"

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

int	strToInt(char *str)
{
	char* endptr;
	long int nbr;
	nbr = strtol(str, &endptr, 10);
	if (endptr == str || *endptr != '\0')
	{
		std::cerr << RED "Error: " RESET << str << YELLOW " invalid number" RESET << std::endl;
		exit (EXIT_FAILURE);
	}
	if (nbr < 0 || nbr > 50)
	{
		std::cerr << RED "Error: " RESET << str << YELLOW " out of range [0 - 50]" RESET << std::endl;
		exit (EXIT_FAILURE);
	}
	return ((int)nbr);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED "Error:" YELLOW " wrong number of arguments !" RESET << std::endl;
		std::cerr << YELLOW "Usage: "  RESET << argv[0] << " <number of zombies in the horde>" << std::endl;
		return (EXIT_FAILURE);
	}

	int nbr_zombie = strToInt(argv[1]);

	Zombie *horde = zombieHorde(nbr_zombie, "zomzom");

	if (nbr_zombie > 0)
	{
		std::cout << std::endl;
		std::cout << YELLOW "use the pointer on horde" RESET << std::endl;
		horde->announce();
	}

	std::cout << std::endl;
	std::cout << YELLOW "use each cell of the array" RESET << std::endl;
	for (int i = 0; i < nbr_zombie; i++)
		horde[i].announce();

	std::cout << std::endl;
	delete []horde;
	return (EXIT_SUCCESS);
}
