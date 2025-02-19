/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:18:19 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/19 21:19:36 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	public:

		Harl(void);
		~Harl(void);

		void complain(const std::string level);
		static int levelToInt(const std::string& level);

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		static const std::string _level_tab[4];
	
};

typedef void (Harl::*t_mbrFuncPtr)(void);

#endif
