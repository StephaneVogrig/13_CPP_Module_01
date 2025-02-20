/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:54:59 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/20 11:46:39 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << YELLOW "A weapon '" << _type << "' is created" RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << YELLOW "A weapon '" << _type << "' is destroy" RESET << std::endl;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(const std::string newType)
{
	this->_type = newType;
}
