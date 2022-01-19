/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:25:11 by inshin            #+#    #+#             */
/*   Updated: 2022/01/20 00:54:14 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie {

private:
	std::string	_name;

public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie( void );
	void	announce( void );

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
