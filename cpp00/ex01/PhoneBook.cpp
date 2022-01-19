/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:23 by inshin            #+#    #+#             */
/*   Updated: 2022/01/19 22:20:13 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) : _index(0)
{

}

PhoneBook::~PhoneBook( void )
{
	std::cout << COLOR_Y << "Goodbye!" << COLOR_END << std::endl;
}

std::string Contact::GetFirstName( void ) const
{
	return firstName;
}

std::string Contact::GetLastName( void ) const
{
	return lastName;
}

std::string Contact::GetNickname( void ) const
{
	return nickname;
}

std::string Contact::GetPhoneNumber( void ) const
{
	return phoneNumber;
}

std::string Contact::GetSecret( void ) const
{
	return darkestSecret;
}

void	Contact::SetContact( void )
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

void	Contact::ShowContact( void ) const
{
	std::cout << std::setw(17) << "First Name | " << firstName << std::endl;
	std::cout << std::setw(17) << "Last Name | " << lastName << std::endl;
	std::cout << std::setw(17) << "Nickname | " << nickname << std::endl;
	std::cout << std::setw(17) << "Phone Number | " << phoneNumber << std::endl;
	std::cout << std::setw(17) << "Darkest Secret | " << darkestSecret << std::endl;
}

void PhoneBook::PhonebookHeader( void ) const
{
	std::cout << COLOR_Y <<  std::setfill ('*') << std::setw (34) << COLOR_END << std::endl;
	std::cout << COLOR_Y << "[CMD TYPE] ADD, SEARCH, EXIT" << COLOR_END << std::endl;
	std::cout << COLOR_Y <<  std::setfill ('*') << std::setw (34) << COLOR_END << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "> ";
}

void PhoneBook::Add( void )
{
	if (_index % BOOK_LEN == 0) {
		_index = 0;
	}
	contact[_index].SetContact();
	_index++;
}

std::string PhoneBook::GetBlock( std::string str )
{
	if (str.size() > WORD_WIDTH)
	{
		str[WORD_WIDTH - 1] = '.';
		str.erase(WORD_WIDTH);
	}
	return str;
}

void PhoneBook::SearchHeader( void ) const
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
}

void PhoneBook::Search( void )
{
	SearchHeader();
	for (int i = 0; i < BOOK_LEN; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << GetBlock(contact[i].GetFirstName()) << "|";
		std::cout << std::setw(10) << GetBlock(contact[i].GetLastName()) << "|";
		std::cout << std::setw(10) << GetBlock(contact[i].GetNickname()) << std::endl;
	}
	std::cout << COLOR_G << "Please enter an index to view details." << COLOR_END << std::endl;
	std::cout << COLOR_G  << "SEARCH> " << COLOR_END;

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


