/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:25:11 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 02:37:26 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {

private:
	std::string	_name;

public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif
