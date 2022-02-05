/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 02:57:22 by inshin            #+#    #+#             */
/*   Updated: 2022/02/06 06:56:23 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "1---" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "2---" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << "3---" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");

	std::cout << "4---" << std::endl;
	me->equip(tmp);

	std::cout << "5---" << std::endl;
	tmp = src->createMateria("cure");

	std::cout << "6---" << std::endl;
	me->equip(tmp);

	std::cout << "7---" << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << "8---" << std::endl;
	me->use(0, *bob);
	std::cout << "9---" << std::endl;
	me->use(1, *bob);
	std::cout << "10---" << std::endl;
	delete bob;
	std::cout << "---" << std::endl;
	delete me;
	std::cout << "---" << std::endl;
	delete src;
	std::cout << "---" << std::endl;
	return 0;
}
