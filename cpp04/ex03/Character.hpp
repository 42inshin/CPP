/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:28:18 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 06:25:45 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria*	inven[INVEN_SIZE];
	std::string	name;

public:
	AMateria* getMateria(int idx) const;
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character();
	Character(const std::string & name);
	Character(const Character& copy);
	Character& operator=(const Character& copy);
	~Character();
};

#endif
