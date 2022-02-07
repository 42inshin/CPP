/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:35:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:17:27 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{
public:
	void makeSound() const;
	Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	~Cat();
};

#endif
