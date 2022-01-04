/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:19 by inshin            #+#    #+#             */
/*   Updated: 2022/01/05 03:38:17 by inshin           ###   ########seoul.kr  */
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
		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetNickname() const;
		std::string GetPhoneNumber() const;
		std::string GetSecret() const;
		void SetContact();
		void ShowContact() const;
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
		void PhonebookHeader() const;
		void Add();
		void SearchHeader() const;
		void Search();
		std::string GetBlock(std::string str);
};

#endif
