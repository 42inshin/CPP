/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:41 by inshin            #+#    #+#             */
/*   Updated: 2022/02/01 01:06:48 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Brain Dog::getBrain() const
{
	return *myBrain;
}

void Dog::makeSound() const
{
	std::cout << "Wal Wal!!..." << std::endl;
}

Dog::Dog() : Animal(), myBrain(NULL)
{
	std::cout << "Dog Constructors!" << std::endl;
	this->SetType("Dog");
	myBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructors!" << std::endl;
	delete myBrain;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog Assignation operator!" << std::endl;
	*myBrain = copy.getBrain();
	return *this;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Cat Copy Constructor!" << std::endl;
	*this = copy;
}
