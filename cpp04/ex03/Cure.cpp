/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:21:23 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 06:53:59 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria* Cure::clone() const
{
	return new Cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default Constructor" << std::endl;
}


Cure::Cure(const Cure& copy) : AMateria(copy)
{
	std::cout << "Cure Copy Constructor" << std::endl;
}

Cure& Cure::operator=(const Cure& copy)
{
	std::cout << "Cure Assignation" << std::endl;
	this->type = copy.getType();
	return *this;
}

Cure::~Cure()
{
	std::cout << "~Cure" << std::endl;
}

