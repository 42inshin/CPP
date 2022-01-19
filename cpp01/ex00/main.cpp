/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:22:23 by inshin            #+#    #+#             */
/*   Updated: 2022/01/20 00:58:19 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie a("stack");
	a.announce();

	Zombie *z = newZombie("heap");
	z->announce();

	randomChump("random");

	delete z;
	return 0;
}
