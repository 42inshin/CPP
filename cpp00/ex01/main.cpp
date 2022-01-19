/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:11 by inshin            #+#    #+#             */
/*   Updated: 2022/01/19 10:40:06 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// 연락처는 클래스의 인스턴스로 정의해야한다.
// 연락처 배열을 포함해야한다.
int	main(void)
{
	PhoneBook 	book;
	std::string cmd = "";

	while (true)
	{
		book.PhonebookHeader();
		std::cin >> cmd;
		if (std::cin.eof())
			break;
		if (cmd == "EXIT")
			return 0;
		else if (cmd == "ADD")
			book.Add();
		else if (cmd == "SEARCH")
			book.Search();
		else
			std::cout << '"' << cmd << '"' << " is wrong cmd" << std::endl;
	}
	return 0;
}
