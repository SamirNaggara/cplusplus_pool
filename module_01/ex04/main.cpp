/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:48:28 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 16:24:44 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Sed.hpp"
#include <stdlib.h>


int main(int ac, char **av)
{
	ft_parsing(ac);
	
	std::string		file(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);


	Sed sed(file, s1, s2);
	sed.modify_content();
	sed.fillReplaceFile();
}

void	ft_parsing(int ac)
{
	if (ac < 4)
	{
		std::cout << "Entrez le bon nombre d'arguments !!" << std::endl;
		exit(1);
	}
}
