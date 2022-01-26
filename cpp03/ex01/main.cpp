/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:10 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 04:49:50 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::string name1 = "Tom";
	std::string name2 = "Jerry";

	ClapTrap c1(name1);
	ScavTrap c2(name2);

	c1.info();
	c2.info();

	c1.beRepaired(3);
	std::cout << std::endl;
	c1.attack(c2.getName());
	c2.takeDamage(c1.getAD());
	std::cout << std::endl;
	c2.guardGate();
	c2.attack(c1.getName());
	c1.takeDamage(c2.getAD());
	c1.beRepaired(5);

	c1.info();
	c2.info();
	return 0;
}
