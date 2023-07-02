/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:40:52 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/02 23:55:49 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "functions.hpp"

int	main(void)
{
	Zombie	*zomb;

	// Zombie dans la heap
	zomb = newZombie("Patrick");
	zomb->announce();
	delete zomb;

	// Zombie dans la stack
	randomChump("Paul");
	return (0);
}