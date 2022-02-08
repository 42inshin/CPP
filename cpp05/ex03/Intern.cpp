/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:51:00 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 03:58:29 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::makeForm(const std::string name, const std::string target)
{
	std::string form_name_arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (name == form_name_arr[i])
			{
				std::cout << "Intern creates <" << name << ":"  << target << ">" << std::endl;
				switch (i)
				{
					case 0:
						return new ShrubberyCreationForm(target);
					case 1:
						return new RobotomyRequestForm(target);
					case 2:
						return new PresidentialPardonForm(target);
				}
			}
		}
		throw UnknownFormException();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Intern can't make Form, because <" << e.what() << ">" << std::endl;
		return NULL;
	}
}

Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern Copy Constructor" << std::endl;
	*this = copy;
}

Intern& Intern::operator=(const Intern& copy)
{
	std::cout << "Intern Assignment" << std::endl;
	static_cast<void>(copy);
	return *this;
}

Intern::~Intern()
{
	std::cout << "~Intern" << std::endl;
}

const char* Intern::UnknownFormException::what() const throw()
{
	return "* Unknown Form *";
}
