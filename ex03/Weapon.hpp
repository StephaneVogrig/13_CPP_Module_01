/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:52:32 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/20 11:43:54 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

#ifndef YELLOW
# define YELLOW "\033[33m"
#endif
#ifndef RESET
# define RESET "\033[0m"
#endif

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
