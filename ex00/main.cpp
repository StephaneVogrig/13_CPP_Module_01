/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:28 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 14:58:02 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Zombie.hpp"

#ifndef YELLOW
# define YELLOW "\033[33m"
#endif
#ifndef RESET
# define RESET "\033[0m"
#endif

int main(void)
{
	std::cout << YELLOW "Create a zombie on the heap" RESET << std::endl;
	Zombie* zombieHeap = newZombie("zombieHeap");
	delete zombieHeap;

	std::cout << YELLOW "Create a zombie on the stack" RESET << std::endl;
	randomChump("zombieStack");
	
	return (EXIT_SUCCESS);
}
