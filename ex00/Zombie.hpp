/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:03:48 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/16 13:48:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#ifndef GREEN
# define GREEN "\033[32m"
#endif
#ifndef RESET
# define RESET "\033[0m"
#endif

#include <string>

class Zombie
{
	public:
		~Zombie(void);
		Zombie(std::string name);
		void announce(void);
		
	private:
		std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
