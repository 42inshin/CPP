/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:20:43 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:26:56 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound() const
{
	std::cout << "Aniiiiiii malllll..." << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::SetType(std::string type)
{
	this->type = type;
}

Animal::Animal() : type("Undefined")
{
	std::cout << "Animal Constructors!" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal Copy Constructors!" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal Assignation!" << std::endl;
	type = copy.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructors!" << std::endl;
}

