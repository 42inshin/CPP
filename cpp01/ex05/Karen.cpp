/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 05:20:00 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 06:43:00 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*fptr[4])(void);
	fptr[0] = &Karen::debug;
	fptr[1] = &Karen::info;
	fptr[2] = &Karen::warning;
	fptr[3] = &Karen::error;

	std::string comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;
	while (++i < 4)
	{
		if (level == comments[i])
			(this->*fptr[i])();
	}
}
