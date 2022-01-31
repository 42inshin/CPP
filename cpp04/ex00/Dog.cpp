/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:41 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 16:32:05 by inshin           ###   ########seoul.kr  */
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

Dog::~Dog()
{
	std::cout << "Dog Destructors!" << std::endl;
}
