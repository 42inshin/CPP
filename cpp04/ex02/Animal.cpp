/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:20:43 by inshin            #+#    #+#             */
/*   Updated: 2022/02/01 02:21:26 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

Animal::~Animal()
{
	std::cout << "Animal Destructors!" << std::endl;
}

