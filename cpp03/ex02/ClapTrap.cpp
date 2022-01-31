/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 06:41:45 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target)
{
	if (_hit_points == 0)
	{
		std::cout << "<" << _name
			<< "> already dead! Not attack <" << target
			<< "> " << std::endl;
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "<" << _name
			<< "> Empty EnergyPoints, Not attack <" << target
			<< "> "<< std::endl;
	}
	else
	{
		_energy_points--;
		std::cout << "<" << _name
			<< "> attack <" << target
			<< ">, causing <" << _attack_damage
			<< "> points of damage!"<< std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "<" << _name
		<< "> already dead!" << std::endl;
	}
	else if (_hit_points <= amount)
	{
		_hit_points = 0;
		std::cout << "<" << _name
		<< "> attacked <" << amount
		<< "> and die!" << std::endl;
	}
	else
	{
		_hit_points -= amount;
		std::cout << "<" << _name
			<< "> attacked <" << amount
			<< ">, hp is <" << _hit_points
			<< "> left!"<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "Fail beRepaired, <" << _name
		<< "> already dead!" << std::endl;
	}
	else if (_hit_points == _max_hp)
	{
		std::cout << "<" << _name
		<< "> hp is already full!" << std::endl;
	}
	else if (_hit_points + amount >= _max_hp)
	{
		_hit_points = _max_hp;
		std::cout << "<" << _name
		<< "> beRepaired <" << amount
		<< ">, hp is full!" << std::endl;
	}
	else
	{
		_hit_points += amount;
		std::cout << "<" << _name
			<< "> beRepaired <" << amount
			<< ">, hp became <" << _hit_points
			<< ">" << std::endl;
	}
}

void ClapTrap::info(void)
{
	std::cout << "======= INFO =======" << std::endl;
	std::cout << "NAME: " << _name << std::endl;
	std::cout << "HP: " << _hit_points << " / " << _max_hp << std::endl;
	std::cout << "EP: " << _energy_points << std::endl;
	std::cout << "AD: " << _attack_damage << std::endl << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return _name;
}
unsigned int ClapTrap::getHP(void) const
{
	return _hit_points;
}

unsigned int ClapTrap::getEP(void) const
{
	return _energy_points;
}

unsigned int ClapTrap::getAD(void) const
{
	return _attack_damage;
}

unsigned int ClapTrap::getMaxHP(void) const
{
	return _max_hp;
}


ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	_max_hp = _hit_points;
	std::cout << "ClapTrap <" << _name << "> is created!" << std::endl;
}

ClapTrap::ClapTrap(void)
	: _hit_points(10), _energy_points(10), _attack_damage(0)
{
	_name = "NULL";
	_max_hp = _hit_points;
	std::cout << "ClapTrap <" << _name << "> is created!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap <" << _name << "> is destroyed!" << std::endl;
}

