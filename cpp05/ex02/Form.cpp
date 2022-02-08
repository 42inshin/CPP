/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:55:31 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:13:49 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::getTarget() const
{
	return target;
}

void Form::setTarget(std::string target)
{
	this->target = target;
}

std::string Form::getName() const
{
	return name;
}

bool Form::getSign() const
{
	return sign;
}

int Form::getSignGrade() const
{
	return sign_grade;
}

int Form::getExecuteGrade() const
{
	return execute_grade;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > sign_grade)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		sign = true;
	}
}

Form::Form(const std::string name, const int sign_grade, const int execute_grade)
	:name(name), target("none"), sign(false)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || execute_grade > 150)
		throw Form::GradeTooLowException();
	this->sign_grade = sign_grade;
	this->execute_grade = execute_grade;
	std::cout << "Form Named Constructor" << std::endl;
}

Form::Form()
	:name("Undifined"), target("none"), sign(false), sign_grade(1), execute_grade(1)
{
	std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(const Form &copy)
	: name(copy.getName())
{
	std::cout << "Form Copy Constructor" << std::endl;
	*this = copy;
}

Form& Form::operator=(const Form &copy)
{
	std::cout << "Form Assignment" << std::endl;
	this->target = copy.getTarget();
	this->sign = copy.getSign();
	this->sign_grade = copy.getSignGrade();
	this->execute_grade = copy.getExecuteGrade();
	return *this;
}

Form::~Form()
{
	std::cout << "~Form" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "* Grade Too High *";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "* Grade Too Low *";
}

const char* Form::FormNotSignException::what() const throw()
{
	return "* The Form is not signed. *";
}

const char* Form::FileNotOpenException::what() const throw()
{
	return "* File does not open *";
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	return os << "<" << f.getName() << ">, signed <"
			<< (f.getSign() ? "True" : "False") << ">, sign grade <"
			<< f.getSignGrade() << ">, execute grade <"
			<< f.getExecuteGrade() << ">";
}
