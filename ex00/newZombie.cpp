/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:40 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 15:02:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"

Zombie* newZombie(const std::string name)
{
	Zombie*	zombie = new Zombie(name);
	if (zombie == NULL)
	{
		std::cout << "newZombie: Allocation failed !" << std::endl;
		exit (EXIT_FAILURE);
	}
	zombie->announce();
	return (zombie);
}