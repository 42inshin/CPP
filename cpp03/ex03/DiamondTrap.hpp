/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:04 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 11:54:51 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP_H__
#define __DIAMOND_TRAP_H__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	void attack(std::string const & target);
	void whoAmI(void);
	DiamondTrap(std::string name);
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap& operator=(const DiamondTrap& copy);
	~DiamondTrap(void);
};

#endif
