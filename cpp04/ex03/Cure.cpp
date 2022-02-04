/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:21:23 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 16:24:14 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria* Cure::clone() const
{
	AMateria *mete = new Cure;
	return mete;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals NAME’s wounds " << target.getName() << " *" << std::endl;
}

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure create!" << std::endl;
}

Cure::~Cure()
{
	std::cout << "~Cure" << std::endl;
}

