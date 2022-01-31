/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongMain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:56:57 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 23:06:35 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	delete i;
	delete meta;
}
