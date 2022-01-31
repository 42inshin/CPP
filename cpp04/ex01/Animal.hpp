/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:57:58 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 16:38:22 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;

public:
	virtual void makeSound() const;
	std::string getType() const;
	void SetType(std::string type);
	Animal();
	virtual ~Animal();
};

#endif
