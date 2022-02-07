/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:09:28 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 22:58:56 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal a;
	// a.makeSound();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	i->makeSound();
	j->makeSound();
	delete j;//should not create a leak
	delete i;
}

/*
int main()
{
	Animal *arr[10];
	for (int i = 0; i < 10; i++) {
		std::cout << '[' << i << "] ";
		if (i % 2 == 0)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int i = 0; i < 10; i++) {
		std::cout << '[' << i << "] ";
		delete arr[i];
	}
} */
