/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 03:05:50 by inshin            #+#    #+#             */
/*   Updated: 2022/02/01 03:40:04 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use: \"* " << target.getName() << " *\"" << std::endl;
}
