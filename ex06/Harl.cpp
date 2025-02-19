/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:16:57 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/19 21:19:37 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string Harl::_level_tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

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

int Harl::levelToInt(const std::string& level)
{
	int i;
	for (i = 0; i < 4; i++)
		if (_level_tab[i] == level)
			break;
	return (i);
}

void Harl::complain(const std::string level)
{
	t_mbrFuncPtr func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = levelToInt(level);
	if (i < 4)
		(this->*func[i])();
}
		