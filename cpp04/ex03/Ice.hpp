/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 03:27:42 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 17:53:49 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	AMateria* clone() const;
	void use(ICharacter& target);
	Ice();
	~Ice();
};

#endif
