/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:55:08 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 23:45:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		std::string	getName(void);
		Weapon&		getWeapon(void);

		void		setName(std::string name);
		void		setWeapon(Weapon& weapon);

		void		attack(void);

	private:

		std::string	_name;
		Weapon&		_weapon;

};

#endif