/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:34:39 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 12:57:07 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__
#define __CLAPTRAP__

#include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hit_points;
	int			_energie_points;
	int			_attack_damage;
	bool		_can_act() const;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& claptrap);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& claptrap); //Surcharge de l'opérateur d'affectation

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};



#endif