/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:04 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:21:36 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{
public:
	void makeSound() const;
	Dog();
	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);
	~Dog();
};

#endif
