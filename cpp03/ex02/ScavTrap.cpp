/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 11:46:49 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap <" << _name << "> Gate keeper mode ON!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_max_hp = _hit_points;
	std::cout << "ScavTrap <" << _name << "> is created!" << std::endl;
}

ScavTrap::ScavTrap(void)
{
	_name = "NULL";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_max_hp = _hit_points;
	std::cout << "ScavTrap <" << _name << "> is created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	_name = copy.getName();
	_hit_points = copy.getHP();
	_energy_points = copy.getEP();
	_attack_damage = copy.getAD();
	_max_hp = copy.getMaxHP();
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap <" << _name << "> is destroyed!" << std::endl;
}

