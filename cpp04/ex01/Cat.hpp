/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:35:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 17:03:36 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *myBrain;

public:
	Brain* getBrain() const;
	void makeSound() const;
	Cat();
	Cat& operator=(const Cat& copy);
	Cat(const Cat& copy);
	~Cat();
};

#endif
