/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:08:35 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 17:33:51 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : 
	ClapTrap(name, 100, 100, 30)
{
	_hit_points = 100;
	_energie_points = 100;
	_attack_damage = 30;
	std::cout << "Le constructeur de FragTrap est appelé" << std::endl;

}


FragTrap::FragTrap() : ClapTrap("", 100, 100, 30){}

FragTrap::~FragTrap()
{
		std::cout << "Le destructeur de FragTrap est appelé" << std::endl;

}

void	FragTrap::highFivesGuys() const
{
	if (!_can_act())
		return ;
	std::cout << _name<< " donne un high five" << std::endl;

}

void	FragTrap::attack(const std::string& target)
{
	if (!_can_act())
		return ;
	_energie_points--;
	std::cout << _name << " attack " << target << ", causing " << _attack_damage << " of damage. Submit to FragTrap" << std::endl;
}
