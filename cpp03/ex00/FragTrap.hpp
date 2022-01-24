/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:04 by inshin            #+#    #+#             */
/*   Updated: 2022/01/25 05:21:26 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP_H__
#define __FRAG_TRAP_H__

#include <iostream>
#include <string>

class FragTrap
{

private:
	int	_hit_point;
	int	_max_hit_point;
	int	_energy_point;
	int	_max_energy_point;
	std::string _name;
	int	_level;
	int _melee_attack_damage;
	int _ranged_attack_damage;
	int _armor_damage_reduction;

public:
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	FragTrap(std::string name);
	FragTrap(void);
	~FragTrap(void);

};

#endif
