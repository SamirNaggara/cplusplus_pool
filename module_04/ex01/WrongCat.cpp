
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat class constructor" << std::endl;

}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class destructor" << std::endl;

}

void		WrongCat::makeSound() const
{
	std::cout << "Wrong Miaw miaow" << std::endl;

}

WrongCat::WrongCat(const WrongCat& wrongCat) : WrongAnimal(wrongCat)
{
	std::cout << "WrongCat class copy constructor" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrongCat)
{
	type = wrongCat.getType();
	std::cout << "WrongCat class affectation operator" << std::endl;
	return (*this);
}