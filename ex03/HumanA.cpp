/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:52:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/17 01:03:43 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA(void)
{}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

Weapon&		HumanA::getWeapon(void)
{
	return (this->_weapon);
}

void		HumanA::setName(std::string newName)
{
	this->_name = newName;
}

void		HumanA::setWeapon(Weapon& newWeapon)
{
	this->_weapon = newWeapon;
}

void		HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
