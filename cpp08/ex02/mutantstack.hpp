/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:10:41 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 03:51:38 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename MutantStack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	MutantStack() {}

	MutantStack(const MutantStack<T>& copy)
	{
		std::stack<T>::operator=(copy);
	}

	MutantStack& operator=(const MutantStack<T>& copy)
	{
		std::stack<T>::operator=(copy);
		return *this;
	}

	~MutantStack() {}
};

#endif
