/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:35:35 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 00:01:46 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(int ac, char **av)
{
	std::string	inputs;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	if (ac > 1)
	{
		for (int i = 1; i < ac ; i++)
			inputs += av[i]; 
		for(int i = 0; inputs[i]; i++)
			inputs[i] = toupper(inputs[i]);
		std::cout << inputs << std::endl;
	}
	return (1);
}