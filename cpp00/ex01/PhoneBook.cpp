/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:23 by inshin            #+#    #+#             */
/*   Updated: 2022/01/04 12:11:44 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::GetFirstName()
{
	return firstName;
}

std::string Contact::GetLastName()
{
	return lastName;
}

std::string Contact::GetNickname()
{
	return nickname;
}

std::string Contact::GetPhoneNumber()
{
	return phoneNumber;
}

std::string Contact::GetSecret()
{
	return darkestSecret;
}

void	Contact::Account()
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

void	Contact::Find()
{
	std::cout << std::setw(17) << "First Name | " << firstName << std::endl;
	std::cout << std::setw(17) << "Last Name | " << lastName << std::endl;
	std::cout << std::setw(17) << "Nickname | " << nickname << std::endl;
	std::cout << std::setw(17) << "Phone Number | " << phoneNumber << std::endl;
	std::cout << std::setw(17) << "Darkest Secret | " << darkestSecret << std::endl;
}

void PhoneBook::PhonebookHeader()
{
	std::cout << COLOR_Y <<  std::setfill ('*') << std::setw (34) << COLOR_END << std::endl;
	std::cout << COLOR_Y << "[CMD TYPE] ADD, SEARCH, EXIT" << COLOR_END << std::endl;
	std::cout << COLOR_Y <<  std::setfill ('*') << std::setw (34) << COLOR_END << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "> ";
}

void PhoneBook::Add()
{
	static int s_index = 0;

	if (s_index % BOOK_LEN == 0) {
		s_index = 0;
	}
	contact[s_index].Account();
	s_index++;
}

std::string PhoneBook::GetBlock(std::string word)
{
	if (word.size() > WORD_WIDTH)
	{
		word[WORD_WIDTH - 1] = '.';
		word.erase(WORD_WIDTH);
	}
	return word;
}

void PhoneBook::SearchHeader()
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
		contact[index].Find();
}


