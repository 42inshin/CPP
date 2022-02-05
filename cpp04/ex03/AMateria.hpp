/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 02:57:46 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 06:32:55 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include <iostream>
#include "ICharacter.hpp"

#define INVEN_SIZE 4

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	AMateria(std::string const & type);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	AMateria();
	AMateria(const AMateria& copy);
	AMateria& operator=(const AMateria& copy);
	virtual ~AMateria();
};

#endif
