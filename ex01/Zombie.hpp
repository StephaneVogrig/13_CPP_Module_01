/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:48 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 15:49:15 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

#ifndef GREEN
# define GREEN "\033[32m"
#endif
#ifndef RESET
# define RESET "\033[0m"
#endif


class Zombie
{
	public:

		Zombie();
		Zombie(const std::string name);

		~Zombie(void);

		void		setName(const std::string name);
		std::string	getName();
		void		announce(void);

	private:

		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
