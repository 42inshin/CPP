/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:49:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/25 05:19:32 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target)
{

}

void FragTrap::meleeAttack(std::string const & target)
{

}

void FragTrap::takeDamage(unsigned int amount)
{

}

void FragTrap::beRepaired(unsigned int amount)
{

}

FragTrap::FragTrap(std::string name)
{

}

FragTrap::FragTrap(void)
{
	std::cout << "Please Write a Name!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << " is destroyed!" << std::endl;
}

