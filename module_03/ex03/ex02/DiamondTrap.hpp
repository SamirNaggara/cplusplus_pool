/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:14:45 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 17:54:37 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP__
# define __DIAMOND_TRAP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
private:
	int		_hit_points;
	int		_energie_points;
	int		_attack_damage;
	std::string	_name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void	whoAmI() const;
};




#endif