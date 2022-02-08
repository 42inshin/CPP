/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 02:16:13 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 04:10:33 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->getName() << "> executes <" << form.getName() << ":"
				<< form.getTarget() << ">" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "<" << this->getName() << "> can't execute <" << form.getName() << ":"
				<< form.getTarget() << ">, because <" << e.what() << ">" << std::endl;
	}
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << this->getName() << "> signs <" << form.getName() << ":"
				<< form.getTarget() << ">" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "<" << this->getName() << "> cannot sign <" << form.getName()
			<<">, because <" << e.what() << ">" << std::endl;
	}
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade(int grade)
{
	if (this->grade - grade < 1)
		throw GradeTooHighException();
	this->grade -= grade;
}

void Bureaucrat::decrementGrade(int grade)
{
	if (this->grade + grade > 150)
		throw GradeTooLowException();
	this->grade += grade;
}

Bureaucrat::Bureaucrat()
	: name("Anonymous"), grade(150)
{
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
	: name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat Named Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
	: name(copy.getName()), grade(copy.getGrade())
{
	std::cout << "Bureaucrat Copy Constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat Assignment" << std::endl;
	grade = copy.getGrade();
	return *this; // name은 상수라 대입 x
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "~Bureaucrat" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "* Grade Too High, highest Grade is 1 *";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "* Grade Too Low, Lowest Grade is 150 *";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << "<" << b.getName() << ">, bureaucrat grade <" << b.getGrade() << ">";
	return os;
}
