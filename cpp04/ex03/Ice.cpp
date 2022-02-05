/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:01:42 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 06:34:56 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone() const
{
	return new Ice;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default Constructor" << std::endl;
}


Ice::Ice(const Ice& copy) : AMateria(copy)
{
	std::cout << "Ice Copy Constructor" << std::endl;
}

Ice& Ice::operator=(const Ice& copy)
{
	std::cout << "Ice Assignation" << std::endl;
	this->type = copy.getType();
	return *this;
}

Ice::~Ice()
{
	std::cout << "~Ice" << std::endl;
}
