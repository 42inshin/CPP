/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:24:23 by inshin            #+#    #+#             */
/*   Updated: 2022/01/20 00:58:38 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << '<' << _name << "> is deaded" << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Please, Input a Zombie name." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << '<' << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
