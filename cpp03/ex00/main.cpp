/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:10 by inshin            #+#    #+#             */
/*   Updated: 2022/01/27 04:53:17 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::string name1 = "Tom";
	std::string name2 = "Jerry";

	ClapTrap c1(name1);
	ClapTrap c2(name2);

	c1.info();
	c2.info();

	c1.beRepaired(3);
	c1.attack(c2.getName());
	c2.takeDamage(c1.getAD());
	std::cout << std::endl;
	c2.takeDamage(4);
	c2.takeDamage(6);

	c1.info();
	c2.info();
	return 0;
}
