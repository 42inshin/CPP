/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:57:51 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 06:33:29 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria* Character::getMateria(int idx) const
{
	if ((idx >= 0 && idx < INVEN_SIZE) && inven[idx])
		return inven[idx];
	return 0;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* materia)
{
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (inven[i] == NULL)
		{
			inven[i] = materia;
			std::cout << materia->getType() << ": equip on!" << std::endl;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx < INVEN_SIZE) && inven[idx])
	{
		std::string temp_type = inven[idx]->getType();
		inven[idx] = NULL;
		std::cout << temp_type << ": equip off!" << std::endl;
		return;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < INVEN_SIZE) && inven[idx])
		inven[idx]->use(target);
}

Character::Character(const std::string & name) : name(name)
{
	std::cout << "Character Name Constructor" << std::endl;
	for (int i = 0; i < INVEN_SIZE; i++)
			inven[i] = NULL;
}

Character::Character() : name("")
{
	std::cout << "Character Default Constructor" << std::endl;
	for (int i = 0; i < INVEN_SIZE; i++)
		inven[i] = NULL;
}

Character::Character(const Character& copy)
{
	std::cout << "Character Copy Constructor" << std::endl;
	*this = copy;
}

Character& Character::operator=(const Character& copy)
{
	std::cout << "Character Assignation operator!" << std::endl;
	name = copy.getName();
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (inven[i])
		{
			delete inven[i];
			inven[i] = NULL;
		}
		if (copy.getMateria(i))
			inven[i] = copy.getMateria(i)->clone();
	}
	return *this;
}

Character::~Character()
{
	std::cout << "~Character" << std::endl;
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (inven[i])
			delete inven[i];
	}
}
