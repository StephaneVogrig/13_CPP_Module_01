/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:16:57 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/18 22:53:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{}
Harl::~Harl(void)
{}

void Harl::debug(void)
{
	std::cout << "It's a DEBUG message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "It's an INFO message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "It's a WARNING message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "It's an ERROR message" << std::endl;
}

typedef void (Harl::*t_mbrFuncPtr)(void);

void Harl::complain(std::string level)
{
	t_mbrFuncPtr func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	// void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level_tab[i] == level)
		{
			(this->*func[i])();
			break ;
		}
			
	}
}
		