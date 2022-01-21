/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:57:36 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 03:57:04 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string Weapon::getType( void )
{
	return _type;
}

void Weapon::setType( std::string type )
{
	_type = type;
}

Weapon::Weapon( std::string type ) : _type(type)
{

}

