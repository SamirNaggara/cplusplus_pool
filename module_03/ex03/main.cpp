/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:46:42 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 15:13:01 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	// ClapTrap	jason("Jason");
	// ClapTrap	copie_jason(jason);
	// ClapTrap	mike("Mike");

	// mike.attack("Melissa");
	// mike.takeDamage(8);
	// mike.beRepaired(2);
	// jason.attack("Samir");
	// jason.takeDamage(15);
	// jason.attack("Samir");
	// jason.beRepaired(10);

	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");
	// copie_jason.attack("someone");

	// ScavTrap	jason("Jason");
	// ScavTrap	copie_jason(jason);
	// ScavTrap	mike("Mike");

	// mike.attack("Melissa");
	// mike.takeDamage(8);
	// mike.beRepaired(2);
	// jason.attack("Samir");
	// jason.takeDamage(15);
	// jason.attack("Samir");
	// jason.beRepaired(10);

	// for (int i = 0; i < 60; i++)
	// 	copie_jason.attack("someone");

	// mike.guardGate();
	// copie_jason.guardGate();


	FragTrap	jason("Jason");
	FragTrap	copie_jason(jason);
	FragTrap	mike("Mike");

	mike.attack("Melissa");
	mike.takeDamage(8);
	mike.beRepaired(2);
	jason.attack("Samir");
	jason.takeDamage(15);
	jason.attack("Samir");
	jason.beRepaired(10);

	for (int i = 0; i < 110; i++)
		copie_jason.attack("someone");

	mike.highFivesGuys();
	copie_jason.highFivesGuys();
}