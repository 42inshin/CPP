/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/26 17:04:19 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap <" << _name
			<< "> already dead! Not attack <" << target
			<< "> " << std::endl;
	}
	if (_energy_points == 0)
	{
		std::cout << "ClapTrap <" << _name
			<< "> Empty EnergyPoints, Not attack <" << target
			<< "> "<< std::endl;
	}
	else
	{
		_energy_points--;
		std::cout << "ClapTrap <" << _name
			<< "> attack <" << target
			<< ">, causing <" << _attack_damage
			<< "> points of damage!"<< std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap <" << _name
		<< "> already dead!" << std::endl;
	}
	else if (_hit_points <= amount)
	{
		_hit_points = 0;
		std::cout << "ClapTrap <" << _name
		<< "> attacked <" << amount
		<< "> and die!" << std::endl;
	}
	else
	{
		_hit_points -= amount;
		std::cout << "ClapTrap <" << _name
			<< "> attacked <" << amount
			<< ">, hp is <" << _hit_points
			<< "> left!"<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 10)
	{
		std::cout << "ClapTrap <" << _name
		<< "> hp is already full!" << std::endl;
	}
	else if (_hit_points + amount >= 10)
	{
		_hit_points = 10;
		std::cout << "ClapTrap <" << _name
		<< "> beRepaired <" << amount
		<< ">, hp is full!" << std::endl;
	}
	else
	{
		_hit_points += amount;
		std::cout << "ClapTrap <" << _name
			<< "> beRepaired <" << amount
			<< ">, hp became <" << _hit_points
			<< ">" << std::endl;
	}
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap <" << _name << "> is created!" << std::endl;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Please Write a Name!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap <" << _name << "> is destroyed!" << std::endl;
}

