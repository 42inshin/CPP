/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:10 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 06:17:39 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::string name1 = "Tom";
	std::string name2 = "Jerry";
	std::string name3 = "Peter";
	std::string name4 = "Dia";

	ClapTrap c1(name1);
	ScavTrap c2(name2);
	FragTrap c3(name3);
	DiamondTrap c4(name4);

	c1.info();
	c2.info();
	c3.info();
	c4.info();

	c1.beRepaired(3);
	std::cout << std::endl;
	c1.attack(c2.getName());
	c2.takeDamage(c1.getAD());
	std::cout << std::endl;
	c2.guardGate();
	c2.attack(c1.getName());
	c1.takeDamage(c2.getAD());
	c1.beRepaired(5);
	std::cout << std::endl;
	c3.highFivesGuys();
	c2.attack(c3.getName());
	c3.takeDamage(c2.getAD());
	c3.beRepaired(5);
	std::cout << std::endl;
	c3.attack(c2.getName());
	c2.takeDamage(c3.getAD());
	std::cout << std::endl;
	c4.whoAmI();
	c4.attack(c3.getName());
	c3.takeDamage(c4.getAD());

	c1.info();
	c2.info();
	c3.info();
	c4.info();
	return 0;
}
