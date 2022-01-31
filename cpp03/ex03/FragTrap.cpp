/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 06:45:07 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap <" << _name << "> High fives request!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_max_hp = _hit_points;
	std::cout << "FragTrap <" << _name << "> is created!" << std::endl;
}

FragTrap::FragTrap(void)
{
	_name = "NULL";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_max_hp = _hit_points;
	std::cout << "ScavTrap <" << _name << "> is created!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap <" << _name << "> is destroyed!" << std::endl;
}

