/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:20:01 by inshin            #+#    #+#             */
/*   Updated: 2022/02/08 01:00:26 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::getMateria(int idx) const
{
	if ((idx >= 0 && idx < INVEN_SIZE) && mbook[idx])
		return mbook[idx];
	return 0;
}

void MateriaSource::learnMateria(AMateria* meteria)
{
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (mbook[i] == NULL)
		{
			mbook[i] = meteria;
			std::cout << "learnMateria: " << meteria->getType() << std::endl;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (mbook[i] && mbook[i]->getType() == type)
		{
			std::cout << "createMateria: " << type << std::endl;
			return mbook[i]->clone();
		}
	}
	return 0;
}

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor" << std::endl;
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		mbook[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "MateriaSource Copy Constructor" << std::endl;
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	std::cout << "MateriaSource Assignation" << std::endl;
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (mbook[i])
		{
			delete mbook[i];
			mbook[i] = NULL;
		}
		if (copy.getMateria(i))
			mbook[i] = copy.getMateria(i)->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "~MateriaSource" << std::endl;
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (mbook[i])
			delete mbook[i];
	}
}

