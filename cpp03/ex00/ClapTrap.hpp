/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:04 by inshin            #+#    #+#             */
/*   Updated: 2022/01/26 12:18:01 by inshin           ###   ########seoul.kr  */
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

public:
	std::string getName(void) const;

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap(std::string name);
	ClapTrap(void);
	~ClapTrap(void);

};

#endif
