/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:57:51 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 16:59:23 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INVEN_SIZE; i++)
	{
		if (inven[i] == NULL)
		{
			inven[i] = m;
			std::cout << m->getType() << ": equip on!" << std::endl;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (inven[idx] && (idx >= 0 && idx < INVEN_SIZE))
	{
		std::string temp_type = inven[idx]->getType();
		inven[idx] = NULL;
		std::cout << temp_type << ": equip off!" << std::endl;
		return;
	}
}

void Character::use(int idx, Character& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Character::Character()
{
	// inven배열 모두 NULL 처리
}

Character::Character(const Character& copy)
{

}

Character& Character::operator=(const Character& copy)
{

}

Character::~Character()
{
	std::cout << "~Character" << std::endl;
}
