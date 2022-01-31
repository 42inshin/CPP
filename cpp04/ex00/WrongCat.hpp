/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:35:59 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 16:53:03 by inshin           ###   ########seoul.kr  */
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
	~WrongCat();
};

#endif
