/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:41 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 23:26:01 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Wal Wal!!..." << std::endl;
}

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructors!" << std::endl;
	this->SetType("Dog");
}

Dog::Dog(const Dog& copy) : Animal()
{
	std::cout << "Dog Copy Constructors!" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog Assignation!" << std::endl;
	type = copy.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructors!" << std::endl;
}
