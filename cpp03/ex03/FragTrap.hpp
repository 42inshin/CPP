/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:04 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 11:51:50 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP_H__
#define __FRAG_TRAP_H__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	void highFivesGuys(void);
	FragTrap(std::string name);
	FragTrap(void);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	~FragTrap(void);
};

#endif
