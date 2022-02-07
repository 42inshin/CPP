/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:04 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 11:32:38 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAP_TRAP_H__
#define __CLAP_TRAP_H__

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
	unsigned int _max_hp;

public:
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void info(void);
	std::string getName(void) const;
	unsigned int getHP(void) const;
	unsigned int getEP(void) const;
	unsigned int getAD(void) const;
	unsigned int getMaxHP(void) const;

	ClapTrap(std::string name);
	ClapTrap(void);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& copy);
	~ClapTrap(void);

};

#endif
