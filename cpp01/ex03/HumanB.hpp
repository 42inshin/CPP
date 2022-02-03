/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:19:44 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 13:09:12 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB {

private:
	std::string	_name;
	Weapon		*_w;

public:
	void attack( void ) const;
	void setWeapon( Weapon &w );
	HumanB( std::string name );

};

#endif
