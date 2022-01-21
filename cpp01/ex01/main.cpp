/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:22:23 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 02:33:18 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int num = 20;
	Zombie *horde = zombieHorde(num, "horde");

	for (int i = 0; i < num; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
