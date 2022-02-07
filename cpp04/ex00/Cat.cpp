/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:36:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:25:54 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Meow Meow..." << std::endl;
}

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructors!" << std::endl;
	this->SetType("Cat");
}

Cat::Cat(const Cat& copy) : Animal()
{
	std::cout << "Cat Copy Constructors!" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat Assignation!" << std::endl;
	type = copy.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructors!" << std::endl;
}
