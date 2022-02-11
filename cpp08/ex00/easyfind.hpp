/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:51:48 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 04:25:41 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__
#define __EASYFIND__

#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &c, int n)
{
		typename T::iterator it;

		it = std::find(c.begin(), c.end(), n);
		if (it == c.end())
			throw std::runtime_error("It can't be found");
		return it;
}

#endif
