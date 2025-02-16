/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:45 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 14:44:19 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
	std::cout << "a zombie is born nameless" << std::endl;
}

Zombie::Zombie(const std::string name) : _name(name)
{
	std::cout << "zombi " << this->_name << " is born" << std::endl;
}
	
Zombie::~Zombie( void )
{
	std::cout << "zombi " << this->_name << " is dead" << std::endl;
}

void Zombie::setName(const std::string name)
{
	_name = name;
}

std::string	Zombie::getName()
{
	return (_name);
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": " GREEN "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}
