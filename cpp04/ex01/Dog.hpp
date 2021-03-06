/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:04 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 17:03:03 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *myBrain;

public:
	Brain* getBrain() const;
	void makeSound() const;
	Dog();
	Dog& operator=(const Dog& copy);
	Dog(const Dog& copy);
	~Dog();
};

#endif
