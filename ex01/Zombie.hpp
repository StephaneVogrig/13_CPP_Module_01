/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:48 by svogrig           #+#    #+#             */
/*   Updated: 2025/01/22 18:19:15 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		Zombie(std::string name);
		void announce(void);
		
	private:
		std::string	_name;
};

// Zombie* newZombie(std::string name);
// void	randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif
