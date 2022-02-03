/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:26:14 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 13:09:17 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack( void ) const
{
	std::cout << _name << " attacks with his [" << _w->getType() << "]" << std::endl;
}

void HumanB::setWeapon( Weapon &w )
{
	_w = &w;
}

HumanB::HumanB( std::string name ) : _name(name), _w(NULL)
{

}
