/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:42:30 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 11:05:07 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#ifndef __FONCTIONS_HPP__
# define __FONCTIONS_HPP__

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie		*zombieHorde(int N, std::string name);
#endif