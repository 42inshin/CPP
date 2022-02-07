/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:11:17 by inshin            #+#    #+#             */
/*   Updated: 2022/02/08 04:03:40 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	// range(1 ~ 150) 미만 또는 초과하는 예외 부분
	try
	{
		Bureaucrat humanA("A", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat humanC("C", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// 정상 작동에서 등급 증감함수 사용, << 연산자 오버로딩 확인
	std::cout << std::endl;
	try
	{
		Bureaucrat human42("42seoul", 42);
		std::cout << human42 << std::endl;
	} // scope 지나면서 소멸자 call
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat humanB("B", 1);
		std::cout << humanB << std::endl;
		humanB.incrementGrade(42); // catch로 넘어가면서 아래 코드 실행 안됨
		std::cout << humanB << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat humanD("D", 150);
		std::cout << humanD << std::endl;
		humanD.decrementGrade(42); // catch로 넘어가면서 아래 코드 실행 안됨
		std::cout << humanD << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
