/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:16:35 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 15:03:33 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>


int main()
{
	Animal *animals[4];


	std::cout << std::endl << std::endl<< "Creation des animaux et du tableaux" << std::endl << std::endl;

	Dog *dog1 = new Dog;
	Dog *dog2 = new Dog;
	Cat *cat1 = new Cat;
	Cat *cat2 = new Cat;

	animals[0] = dog1;
	animals[1] = dog2;
	animals[2] = cat1;
	animals[3] = cat2;

	std::cout << std::endl << std::endl<< "Creation d'une copie" << std::endl << std::endl;


	
	Animal	*copyDog = new Dog(*dog1);
	std::cout << "Adresse Brain de dog1 : " << &(dog1->getBrain()) << std::endl;
	std::cout << "Adresse Brain de copy dog1 : " << &(copyDog->getBrain()) << std::endl;
	std::cout << "Les 2 adresses sont différentes, donc c'est bien des copies profondes" << std::endl;
	delete copyDog;

	std::cout << std::endl << std::endl<< "Les 2 adresses sont différentes, donc c'est bien des copies profondes" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];
}