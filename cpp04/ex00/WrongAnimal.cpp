/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:20:43 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:26:16 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const
{
	std::cout << "Aniiiiiii malllll..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::SetType(std::string type)
{
	this->type = type;
}

WrongAnimal::WrongAnimal() : type("Undefined")
{
	std::cout << "WrongAnimal Constructors!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Copy Constructors!" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Assignation!" << std::endl;
	type = copy.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructors!" << std::endl;
}

