/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:21:36 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 21:50:54 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::getIdeas(int i) const
{
	return ideas[i];
}

Brain::Brain(void)
{
	std::cout << "Brain Constructors!" << std::endl;
	for (int i = 0; i < ARR_SIZE; i++)
	{
		if (i % 5 == 0)
			ideas[i] = "eat";
		else if (i % 5 == 1)
			ideas[i] = "drink";
		else if (i % 5 == 2)
			ideas[i] = "work";
		else if (i % 5 == 3)
			ideas[i] = "cpp";
		else
			ideas[i] = "sleep";
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain Copy Constructors!" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
	std::cout << "Brain Assignation!" << std::endl;
	for (int i = 0; i < ARR_SIZE; i++)
		ideas[i] = copy.getIdeas(i);
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructors!" << std::endl;
}
