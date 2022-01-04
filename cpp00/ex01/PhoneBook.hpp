/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:19 by inshin            #+#    #+#             */
/*   Updated: 2022/01/04 12:10:46 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

# define COLOR_R	"\033[0;31m"
# define COLOR_G	"\033[0;32m"
# define COLOR_Y	"\033[0;33m"
# define COLOR_END	"\033[0;0m"

class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickname();
		std::string GetPhoneNumber();
		std::string GetSecret();
		void Account();
		void Find();
};

class PhoneBook
{
	enum
	{
		BOOK_LEN	= 8,
		WORD_WIDTH	= 10,
	};

	private:
		Contact contact[BOOK_LEN];
	public:
		void PhonebookHeader();
		void Add();
		void SearchHeader();
		void Search();
		std::string GetBlock(std::string word);
};

#endif
