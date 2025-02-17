/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:52:32 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/17 01:06:52 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public :

		Weapon(std::string Name);

		~Weapon();

		const std::string&	getType(void);
		void				setType(const std::string type);

	private :

		std::string	_type;

};

#endif
