/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:45 by svogrig           #+#    #+#             */
/*   Updated: 2025/01/22 04:47:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

# define RED "\e[0;31m"
# define RESET "\e[0m"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "create " << this->_name << std::endl;
}
	
Zombie::~Zombie( void )
{
	std::cout << "destroy " << this->_name << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": " RED "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}
