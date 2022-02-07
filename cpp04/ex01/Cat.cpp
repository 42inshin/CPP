/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:36:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 22:54:43 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Brain* Cat::getBrain() const
{
	return myBrain;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow..." << std::endl;
}

Cat::Cat(void) : Animal(), myBrain(NULL)
{
	std::cout << "Cat Constructors!" << std::endl;
	this->SetType("Cat");
	myBrain = new Brain();
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat Assignation operator!" << std::endl;
	type = copy.getType();
	myBrain = new Brain(*(copy.getBrain()));
	return *this;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat Copy Constructor!" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	delete myBrain;
	std::cout << "Cat Destructors!" << std::endl;
}
