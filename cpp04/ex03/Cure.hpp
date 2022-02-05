/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 03:28:21 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 05:46:32 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	AMateria* clone() const;
	void use(ICharacter& target);

	Cure();
	Cure(const Cure& copy);
	Cure& operator=(const Cure& copy);
	~Cure();
};

#endif
