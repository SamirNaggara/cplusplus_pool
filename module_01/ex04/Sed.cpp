/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:04:12 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 16:28:26 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>
#include <stdlib.h>


Sed::Sed(std::string in_file, std::string s1, std::string s2) : _s1(s1), _s2(s2)
{
	// Essayons d'ouvrir le fichier
	this->open_flux(in_file);
	
	// Essayons de creer le fichier qui renverra le resultat
	this->create_replace_flux(in_file);

	// On verifie que s1 n'est pas vide !
	if (s1.empty())
	{
		std::cout << "S1 ne peut pas être vide !" << std::endl;
		this->~Sed();
		exit(1);
	}
	// Lisons le fichier et plaçons le dans _all_content
	this->fillAllContent();
}
void	Sed::create_replace_flux(std::string in_file)
{
	std::string	replace_file = in_file + ".replace";
	_replace_flux.open(replace_file.c_str());
	
	if (!_replace_flux)
	{
		std::cout << "ERREUR: Impossible de creer le fichier replace" << std::endl;
		this->~Sed();
		exit(1);
	}
}

void	Sed::open_flux(std::string in_file)
{
	_open_flux.open(in_file.c_str());
	if (!_open_flux)
	{
		std::cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << std::endl;
		this->~Sed();
		exit(1);
	}

}

void	Sed::fillAllContent()
{
	std::string ligne;
	while (getline(_open_flux, ligne))
		_all_content += ligne += "\n";
	_all_content.erase(_all_content.size() - 1);

}

bool	Sed::modify_content()
{

	std::size_t	start = 0;
	std::size_t found = _all_content.find(_s1);
	while (found != std::string::npos)
	{
		_modify_content += _all_content.substr(start, found - start);
		_modify_content += _s2;
		start = found + _s1.size();
		found = _all_content.find(_s1, start);
	}
	_modify_content += _all_content.substr(start, found);
	
	return (true);
}

bool	Sed::fillReplaceFile()
{
	_replace_flux << _modify_content;


	return (true);
}
