/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:16:35 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 13:39:00 by snaggara         ###   ########.fr       */
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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Voila la type de meta : " << meta->getType() << " " << std::endl;
	std::cout << "Voila la type de Dog: " << j->getType() << " " << std::endl;
	std::cout << "Voila la type de Cat : "<< i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// en résumé
	std::cout << "Voila le bruit de animal : ";
	meta->makeSound();
	std::cout << "Voila le bruit de Dog: ";
	j->makeSound();
	std::cout << "Voila le bruit de Cat : ";
	i->makeSound();


	delete meta;
	delete i;
	delete j;
	
	std::cout << std::endl << std::endl << "test des wrongs" << std::endl << std::endl;


	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << "Voila la type de wrongMeta : " << wrongMeta->getType() << " " << std::endl;
	std::cout << "Voila la type de WrongCat : "<< wrongi->getType() << " " << std::endl;
	wrongi->makeSound(); //will output the WrongCat sound!
	wrongMeta->makeSound();
	std::cout << "Voila le bruit de WrongAnimal : ";
	wrongMeta->makeSound();
	std::cout << "Voila le bruit de WrongCat : ";
	wrongi->makeSound();

	delete wrongMeta;
	delete wrongi;


	std::cout << std::endl << std::endl << "test des copies" << std::endl << std::endl;
	// Copie test
	const Animal* animal = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();

	const Animal* copieAnimal = new Animal(*animal);
	const Dog* copieDog = new Dog(*dog);
	const Cat* copieCat = new Cat(*cat);


	std::cout << "Voila la type de copie animal : " << copieAnimal->getType() << " " << std::endl;
	std::cout << "Voila la type de copie Dog: " << copieDog->getType() << " " << std::endl;
	std::cout << "Voila la type de copie Cat : "<< copieCat->getType() << " " << std::endl;
	copieCat->makeSound(); //will output the cat sound!
	copieDog->makeSound();
	copieAnimal->makeSound();

	// en résumé
	std::cout << "Voila le bruit de copie animal : ";
	copieAnimal->makeSound();
	std::cout << "Voila le bruit de copie Dog: ";
	copieDog->makeSound();
	std::cout << "Voila le bruit de copie Cat : ";
	copieCat->makeSound();


	delete copieAnimal;
	delete copieDog;
	delete copieCat;
	delete animal;
	delete cat;
	delete dog;
	return 0;
}