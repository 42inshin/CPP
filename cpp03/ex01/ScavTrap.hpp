/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:04 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 05:19:17 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_H__
#define __SCAV_TRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	void guardGate(void);
	ScavTrap(std::string name);
	ScavTrap(void);
	~ScavTrap(void);
};

#endif
