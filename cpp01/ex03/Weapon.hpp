/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:58:52 by inshin            #+#    #+#             */
/*   Updated: 2022/02/03 13:27:31 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <string>

class Weapon {

private:
	std::string _type;

public:
	const std::string& getType( void ) const;
	void setType( std::string type );
	Weapon( std::string type );

};

#endif
