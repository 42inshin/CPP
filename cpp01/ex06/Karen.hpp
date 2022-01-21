/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 05:20:03 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 06:28:56 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>
#include <string>

class Karen
{

enum {
	DEBUG	= 0,
	INFO	= 1,
	WARNING	= 2,
	ERROR	= 3,
	NONE	= 4
};

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void none( void );

public:
	void complain( std::string level );

};

#endif
