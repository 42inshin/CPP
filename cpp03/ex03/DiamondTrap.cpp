/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 12:01:45 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "<" << _name << ">, clapTrap: <" << ClapTrap::_name << ">" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	_max_hp = _hit_points;
	std::cout << "DiamondTrap <" << _name << "> is created!" << std::endl;
}

DiamondTrap::DiamondTrap(void)
{
	_name = "NULL";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	_max_hp = _hit_points;
	std::cout << "DiamondTrap <" << _name << "> is created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap Copy Construtor" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	_name = copy.getName();
	_hit_points = copy.getHP();
	_energy_points = copy.getEP();
	_attack_damage = copy.getAD();
	_max_hp = copy.getMaxHP();
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap <" << _name << "> is destroyed!" << std::endl;
}

