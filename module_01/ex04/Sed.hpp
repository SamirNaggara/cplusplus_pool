/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:55:24 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 16:16:28 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __SED__
# define __SED__

#include <fstream>
#include <string>

class Sed
{
private:
	std::ifstream 	_open_flux;
	std::ofstream 	_replace_flux;
	std::string		_all_content;
	std::string		_modify_content;
	std::string		_s1;
	std::string		_s2;

	void	fillAllContent();
	void	open_flux(std::string infile);
	void	create_replace_flux(std::string in_file);



public:
	Sed(std::string in_file, std::string s1, std::string s2);
	bool	modify_content();
	bool	fillReplaceFile();
};

void	ft_parsing(int ac);


#endif
