/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:57:36 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 13:27:25 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType( void ) const
{
	return _type;
}

void Weapon::setType( std::string type )
{
	std::cout << "[" << type << "] Weapon change" << std::endl;
	_type = type;
}

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << "[" << type << "] Weapon is Created" << std::endl;
}

