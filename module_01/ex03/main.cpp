/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:49:27 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 12:41:58 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <string>

/* Mon main a moi */
// int	main()
// {
// 	// Creons une arme pour Paul, et passons lui par référence
// 	Weapon weapon("baliste");
// 	Weapon &weaponREF = weapon;
// 	HumanA	Paul("paul", weaponREF);
// 	Paul.attack();

// 	// Creons une arme pour Jacques, et passons lui par pointeur
// 	Weapon weapon2("dague");
// 	HumanB	Jacque("jacque");
// 	Jacque.setWeapon(weapon2);
// 	Jacque.attack();

// 	return (0);
// }

// Main de l'exercice
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}