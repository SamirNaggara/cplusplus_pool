/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:34:26 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 14:09:37 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : 
	ClapTrap(name, 100, 50, 20)
{
		std::cout << "Le constructeur de ScavTrap est appelé" << std::endl;

}

ScavTrap::~ScavTrap()
{
		std::cout << "Le destructeur de ScavTrap est appelé" << std::endl;

}

void	ScavTrap::guardGate() const
{
	if (!_can_act())
		return ;
	std::cout << _name<< " est entré en mode gate keeper" << std::endl;

}

void	ScavTrap::attack(const std::string& target)
{
	if (!_can_act())
		return ;
	_energie_points--;
	std::cout << _name << " attack " << target << ", causing " << _attack_damage << " of damage. Submit to ScavTrap" << std::endl;
}
