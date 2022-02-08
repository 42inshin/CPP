/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:55:33 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:06:30 by inshin           ###   ########seoul.kr  */
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
	std::string target;
	bool sign;
	int sign_grade;
	int execute_grade;

public:
	std::string getName() const;
	std::string getTarget() const;
	void setTarget(std::string target);
	bool getSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	void beSigned(const Bureaucrat& b);
	virtual void execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSignException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FileNotOpenException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
