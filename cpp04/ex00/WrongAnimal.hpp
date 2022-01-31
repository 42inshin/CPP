/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:57:58 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 17:18:37 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_H__
#define __WRONG_ANIMAL_H__

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	void makeSound() const;
	std::string getType() const;
	void SetType(std::string type);
	WrongAnimal();
	~WrongAnimal();
};

#endif
