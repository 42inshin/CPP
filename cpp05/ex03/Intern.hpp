/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:50:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 03:16:21 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Form* makeForm(const std::string name, const std::string target);

	Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& copy);
	~Intern();

	class UnknownFormException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
