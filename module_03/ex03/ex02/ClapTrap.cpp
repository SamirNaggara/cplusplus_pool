/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:39:21 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 17:24:22 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : 
	_name(name),
	_hit_points(10),
	_energie_points(10),
	_attack_damage(0)
{
	std::cout << "Le constructeur de ClapTrap est appelé" << std::endl;
}

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const ClapTrap& claptrap) : 
	_name(claptrap._name),
	_hit_points(claptrap._hit_points),
	_energie_points(claptrap._energie_points),
	_attack_damage(claptrap._attack_damage)
{
	std::cout << "Le constructeur de copie de ClapTrap est appelé" << std::endl;

}

ClapTrap::ClapTrap(std::string name, int hit_points, int energie_points, int attack_damage) :
	_name(name),
	_hit_points(hit_points),
	_energie_points(energie_points),
	_attack_damage(attack_damage)
{
	std::cout << "Le constructeur de ClapTrap est appelé" << std::endl;

}


ClapTrap::~ClapTrap()
{
	std::cout << "Le destructeur de ClapTrap est appelé" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_energie_points = claptrap._energie_points;
	_attack_damage = claptrap._attack_damage;
	return (*this);
}

bool	ClapTrap::_can_act() const
{
	if (_hit_points <= 0)
	{
		std::cout << _name << " n'a plus assez de points de vie pour effectuer une action" << std::endl;
		return (false);
	}
	if (_energie_points <= 0)
	{
		std::cout << _name <<" n'a plus assez d'energies pour effectuer une action" << std::endl;
		return (false);
	}
	return (true);
}


void	ClapTrap::attack(const std::string& target)
{
	if (!_can_act())
		return ;
	_energie_points--;
	std::cout << _name << " attack " << target << ", causing " << _attack_damage << " of damage" << std::endl;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_can_act())
		return ;
	_energie_points--;
	_hit_points += amount;
	std::cout << _name << " get repaired by " << amount << ". Hit points are now : " <<_hit_points << " points" << std::endl;;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	std::cout << _name << " take " << amount << " damages. " << "Hit points are now : " <<_hit_points << " points" << std::endl;

	if (_hit_points <= 0)
		std::cout << _name << " just died" << std::endl;

}
