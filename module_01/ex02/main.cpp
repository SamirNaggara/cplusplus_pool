/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:33 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 11:19:16 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	// Output les adresses
	std::cout << "Adresse de la string en memoire : " << &brain << std::endl;
	std::cout << "Adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF : " << &stringREF<< std::endl << std::endl;

	// Output les valeurs
	std::cout << "Valeur de la string: " << brain << std::endl;
	std::cout << "Valeur pointé par stringPTR " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF : " << stringREF<< std::endl;
}