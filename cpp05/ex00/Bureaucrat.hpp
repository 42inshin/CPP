/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:52:24 by inshin            #+#    #+#             */
/*   Updated: 2022/02/08 03:39:12 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// 만들어야 할 것
// const name, grade, range(1(high)~150(low))
// range가 너무 크거나 너무 작을 경우 예외 -> throw
// getName, getGrade
// incrementGrade, decrementGrade -> 예외처리
// 숫자가 적어질수록 increment 이다 (ex.3->2)
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <string>

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
