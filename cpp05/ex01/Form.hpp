/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:55:33 by inshin            #+#    #+#             */
/*   Updated: 2022/02/08 05:21:29 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool sign;
	int sign_grade;
	int execute_grade;

public:
	std::string getName() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	void beSigned(const Bureaucrat& b);

	Form(const std::string name, const int sign_grade, const int execute_grade);
	Form();
	Form(const Form &copy);
	Form& operator=(const Form &copy);
	~Form();

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
