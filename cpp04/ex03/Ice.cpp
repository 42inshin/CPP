/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:01:42 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 16:17:52 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone() const
{
	AMateria *mete = new Ice;
	return mete;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice create!" << std::endl;
}

Ice::~Ice()
{
	std::cout << "~Ice" << std::endl;
}
