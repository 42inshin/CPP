/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:19:01 by inshin            #+#    #+#             */
/*   Updated: 2022/01/31 23:44:49 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>
#include <iostream>

class Brain
{
public:
	std::string ideas[100];
	Brain(void);
	~Brain(void);
};

#endif

