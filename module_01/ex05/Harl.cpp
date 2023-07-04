/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:02:46 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/04 11:14:29 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
	_complain[0] = &Harl::debug;
	_complain[1] = &Harl::info;
	_complain[2] = &Harl::warning;
	_complain[3] = &Harl::error;

	_listLevel[0] = "DEBUG";
	_listLevel[1] = "INFO";
	_listLevel[2] = "WARNING";
	_listLevel[3] = "ERROR";
}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{

	for (int i = 0; i < 4; i++)
	{
		if (level == _listLevel[i])
			(this->*_complain[i])();
	}
}