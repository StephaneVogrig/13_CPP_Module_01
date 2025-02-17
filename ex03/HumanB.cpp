/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:55:05 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/17 01:02:56 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{}

HumanB::~HumanB(void)
{}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

Weapon*		HumanB::getWeapon(void)
{
	return (this->_weapon);
}

void		HumanB::setName(std::string newName)
{
	this->_name = newName;
}

void		HumanB::setWeapon(Weapon& newWeapon)
{
	this->_weapon = &newWeapon;
}

void		HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks without weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
