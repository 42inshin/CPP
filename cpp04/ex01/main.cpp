/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:09:28 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 22:51:12 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

/* int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
} */

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

	std::cout << std::endl << "deep check" << std::endl << std::endl;

	Dog dog_base;
	Cat cat_base;
	{
		Dog dog_tmp = dog_base;
		Cat cat_tmp = cat_base;
		int idx = 0;
		std::cout << std::endl << "print ideas" << std::endl << std::endl;
		while (idx < 10)
		{
			std::cout << dog_base.getBrain()->getIdeas(idx) << " : " << dog_tmp.getBrain()->getIdeas(idx) << std::endl;
			std::cout << cat_base.getBrain()->getIdeas(idx) << " : " << cat_tmp.getBrain()->getIdeas(idx) << std::endl;
			idx++;
		}
		std::cout << std::endl;
		std::cout << "Dog Brain basic addr" << " : " << "Dog Brain temp addr" << std::endl;
		std::cout << &(*dog_base.getBrain()) << " : " << &(*dog_tmp.getBrain()) << std::endl;
		std::cout << "Cat Brain basic addr" << " : " << "Cat Brain temp addr" << std::endl;
		std::cout << &(*cat_base.getBrain()) << " : " << &(*cat_tmp.getBrain()) << std::endl;

		std::cout << std::endl << "check tmp destructor" << std::endl << std::endl;
	}
	std::cout << std::endl << "deep check after scope" << std::endl << std::endl;
}
