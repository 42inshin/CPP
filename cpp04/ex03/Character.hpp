/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:28:18 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 16:45:43 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria	*inven[INVEN_SIZE];
	std::string	name;

public:
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character& target);
	Character();
	Character(const Character& copy);
	Character& operator=(const Character& copy);
	~Character();
};

