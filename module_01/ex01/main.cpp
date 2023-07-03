/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:40:52 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 11:10:29 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "functions.hpp"

int	main(void)
{
	Zombie	*zomb;

	// Créé une horde de Zombie
	zomb = zombieHorde(42, "Paul");

	// Tout les zombies s'annoncent
	for (int i = 0; i < 42; i++)
		zomb->announce();

	// Supprimons tout les zombies
	delete [] zomb;
	return (0);
}