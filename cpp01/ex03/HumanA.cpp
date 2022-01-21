/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:14:21 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 03:25:40 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack( void ) const
{
	std::cout << _name << " attacks with his " << _w.getType() << std::endl;
}

HumanA::HumanA( std::string name, Weapon &w ) : _name(name), _w(w)
{

}
