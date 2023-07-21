/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:46:42 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 13:12:03 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	jason("Jason");
	ClapTrap	copie_jason(jason);
	ClapTrap	mike("Mike");

	mike.attack("Melissa");
	mike.takeDamage(8);
	mike.beRepaired(2);
	jason.attack("Samir");
	jason.takeDamage(15);
	jason.attack("Samir");
	jason.beRepaired(10);

	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
	copie_jason.attack("someone");
}