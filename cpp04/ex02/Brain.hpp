/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:19:01 by inshin            #+#    #+#             */
/*   Updated: 2022/02/07 16:38:48 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>
#include <iostream>

#define ARR_SIZE 100

class Brain
{
private:
	std::string ideas[ARR_SIZE];

public:
	std::string getIdeas(int i) const;
	Brain(void);
	Brain(const Brain& copy);
	Brain& operator=(const Brain& copy);
	~Brain(void);
};

#endif

