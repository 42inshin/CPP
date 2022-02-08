/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:52:24 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 00:07:38 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	std::string getName() const;
	int getGrade() const;
	void incrementGrade(int grade);
	void decrementGrade(int grade);
	void signForm(Form& form);
	void executeForm(Form const & form);

	Bureaucrat();
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator=(const Bureaucrat &copy);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw(); // c++11에선 throw() -> noexcept로 변경됨
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw(); // c++11에선 throw() -> noexcept로 변경됨
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
