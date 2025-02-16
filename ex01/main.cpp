/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:11:02 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 15:04:29 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"


#define NBR_ZOMBIE 10

int main(void)
{
	Zombie *horde = zombieHorde(NBR_ZOMBIE, "zomzom");
	if (horde == NULL)
		return (EXIT_FAILURE);
	for (int i = 0; i < NBR_ZOMBIE; i++)
		horde[i].announce();
	delete []horde;
	return (EXIT_SUCCESS);
}