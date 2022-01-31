/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:36:59 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 16:52:28 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Meow Meow..." << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Constructors!" << std::endl;
	this->SetType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructors!" << std::endl;
}
