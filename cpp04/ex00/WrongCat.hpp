/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:35:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:26:50 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_CAT_H__
#define __WRONG_CAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	void makeSound() const;
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat& operator=(const WrongCat& copy);
	~WrongCat();
};

#endif
