/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:36:59 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 16:32:22 by inshin           ###   ########seoul.kr  */
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

Cat::~Cat()
{
	std::cout << "Cat Destructors!" << std::endl;
}
