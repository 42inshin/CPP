/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:04 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 16:29:28 by inshin           ###   ########seoul.kr  */
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
	~Dog();
};

#endif
