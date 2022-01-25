/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/25 05:35:52 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << _name
		<< "> attack <" << target
		<< ">, causing <" << _attack_damage
		<< "> points of damage!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Please Write a Name!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " is destroyed!" << std::endl;
}

