/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:54:19 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 11:08:50 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "functions.hpp"

Zombie		*zombieHorde(int N, std::string name)
{
	Zombie		*zomb;

	zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		zomb[i].set_name(name);
	return (zomb);
}