/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:23 by inshin            #+#    #+#             */
/*   Updated: 2022/01/18 17:42:57 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0)
{

}

PhoneBook::~PhoneBook()
{
	std::cout << COLOR_Y << "Goodbye!" << COLOR_END << std::endl;
}

std::string Contact::GetFirstName() const
{
	return firstName;
}

std::string Contact::GetLastName() const
{
	return lastName;
}

std::string Contact::GetNickname() const
{
	return nickname;
}

std::string Contact::GetPhoneNumber() const
{
	return phoneNumber;
}

std::string Contact::GetSecret() const
{
	return darkestSecret;
}

void	Contact::SetContact()
{
	std::cout << "First Name: ";
	std::cin >> firstName;
	std::cout << "Last Name: ";
	std::cin >> lastName;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> phoneNumber;
	std::cout << "Darkest Secret: ";
	std::cin >> darkestSecret;
	std::cout << "Saved" << std::endl;
}

void	Contact::ShowContact() const
{
	std::cout << std::setw(17) << "First Name | " << firstName << std::endl;
	std::cout << std::setw(17) << "Last Name | " << lastName << std::endl;
	std::cout << std::setw(17) << "Nickname | " << nickname << std::endl;
	std::cout << std::setw(17) << "Phone Number | " << phoneNumber << std::endl;
	std::cout << std::setw(17) << "Darkest Secret | " << darkestSecret << std::endl;
}

void PhoneBook::PhonebookHeader() const
{
	std::cout << COLOR_Y <<  std::setfill ('*') << std::setw (34) << COLOR_END << std::endl;
	std::cout << COLOR_Y << "[CMD TYPE] ADD, SEARCH, EXIT" << COLOR_END << std::endl;
	std::cout << COLOR_Y <<  std::setfill ('*') << std::setw (34) << COLOR_END << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "> ";
}

void PhoneBook::Add()
{
	if (_index % BOOK_LEN == 0) {
		_index = 0;
	}
	contact[_index].SetContact();
	_index++;
}

std::string PhoneBook::GetBlock(std::string str)
{
	if (str.size() > WORD_WIDTH)
	{
		str[WORD_WIDTH - 1] = '.';
		str.erase(WORD_WIDTH);
	}
	return str;
}

void PhoneBook::SearchHeader() const
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
}

void PhoneBook::Search()
{
	SearchHeader();
	for (size_t i = 0; i < BOOK_LEN; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << GetBlock(contact[i].GetFirstName()) << "|";
		std::cout << std::setw(10) << GetBlock(contact[i].GetLastName()) << "|";
		std::cout << std::setw(10) << GetBlock(contact[i].GetNickname()) << std::endl;
	}
	std::cout << COLOR_G << "Please enter an index to view details." << COLOR_END << std::endl;
	std::cout << "SEARCH> ";

	int index;
	std::cin >> index;
	if (std::cin.fail() || (index < 0 || index >= BOOK_LEN))
	{
		std::cout << COLOR_R << "Wrong Index!" << COLOR_END << std::endl;
		std::cin.clear();
		std::cin.ignore(2, '\n');
	}
	else
		contact[index].ShowContact();
}


