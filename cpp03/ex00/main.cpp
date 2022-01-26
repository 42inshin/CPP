/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 04:50:10 by inshin            #+#    #+#             */
/*   Updated: 2022/01/26 12:11:38 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::string name1 = "Tom";
	std::string name2 = "Jerry";

	ClapTrap c1(name1);
	ClapTrap c2(name2);

	c2.beRepaired(3);
	c1.attack(name2);
	c2.takeDamage(4);
	c2.beRepaired(5);
	c2.takeDamage(4);
	c2.beRepaired(2);
	c2.takeDamage(4);
	c2.takeDamage(6);
	return 0;
}
