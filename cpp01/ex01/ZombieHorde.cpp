/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:39:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 02:38:23 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static std::string randName( int N )
{
	std::string num;
	std::string firstName;
	std::string lastName;

	num = static_cast<char>(N % 10 + 48);
	firstName = static_cast<char>(rand() % 26 + 65);
	lastName = static_cast<char>(rand() % 26 + 97);
	return "_" + firstName + lastName + num;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string zombieName = randName(i);
		zombie[i].setName(name + zombieName);
	}
	return zombie;
}
