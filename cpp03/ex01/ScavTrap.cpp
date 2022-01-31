/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 06:43:31 by inshin           ###   ########seoul.kr  */
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap <" << _name << "> is destroyed!" << std::endl;
}

