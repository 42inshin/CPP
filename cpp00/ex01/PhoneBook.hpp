/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:27:19 by inshin            #+#    #+#             */
/*   Updated: 2022/01/19 21:47:49 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <iostream>
# include <string>
# include <iomanip>

# define COLOR_R	"\033[0;31m"
# define COLOR_G	"\033[0;32m"
# define COLOR_Y	"\033[0;33m"
# define COLOR_END	"\033[0;0m"

class Contact {

private:

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;


public:

	std::string	GetFirstName( void ) const;
	std::string	GetLastName( void ) const;
	std::string	GetNickname( void ) const;
	std::string	GetPhoneNumber( void ) const;
	std::string	GetSecret( void ) const;

	void	SetContact( void );
	void	ShowContact( void ) const;

};

class PhoneBook {

enum
{
	BOOK_LEN	= 8,
	WORD_WIDTH	= 10,
};


private:

	int		_index;
	Contact	contact[BOOK_LEN];


public:

	PhoneBook( void );
	~PhoneBook( void );

	void	PhonebookHeader( void ) const;
	void	Add( void );
	void	SearchHeader( void ) const;
	void	Search( void );

	std::string	GetBlock( std::string str );

};

#endif
