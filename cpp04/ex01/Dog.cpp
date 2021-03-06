/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:41 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 22:54:37 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Brain* Dog::getBrain() const
{
	return myBrain;
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

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog Assignation operator!" << std::endl;
	type = copy.getType();
	myBrain = new Brain(*(copy.getBrain()));
	return *this;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog Copy Constructor!" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	delete myBrain;
	std::cout << "Dog Destructors!" << std::endl;
}
