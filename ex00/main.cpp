/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:28 by svogrig           #+#    #+#             */
/*   Updated: 2025/01/22 04:44:46 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "stdlib.h"
#include <iostream>

# define YELLOW "\e[0;33m"
# define RESET "\e[0m"

int main(void)
{
	std::cout << YELLOW "Create a zombie on the heap" RESET << std::endl;
	Zombie* zombieHeap = newZombie("zombieHeap");
	delete zombieHeap;

	std::cout << YELLOW "Create a zombie on the stack" RESET << std::endl;
	randomChump("zombieStack");
	
	return (EXIT_SUCCESS);
}
