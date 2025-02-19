/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:55:03 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/19 20:04:00 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string name);
		~HumanB(void);

		std::string	getName(void);
		Weapon*		getWeapon(void);

		void		setName(std::string name);
		void		setWeapon(Weapon& weapon);

		void		attack(void);

	private:

		std::string	_name;
		Weapon*		_weapon;

};

#endif
