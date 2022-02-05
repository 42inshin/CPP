/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 03:05:50 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 05:56:02 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria Constructor with type" << std::endl;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria use at " << target.getName() << " *" << std::endl;
}

AMateria::AMateria() : type("")
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	std::cout << "AMateria Copy Constructor" << std::endl;
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	std::cout << "AMateria Assignation operator!" << std::endl;
	type = copy.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "~AMateria" << std::endl;
}

