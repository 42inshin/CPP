/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:51:48 by inshin            #+#    #+#             */
/*   Updated: 2022/02/11 20:30:12 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__
#define __EASYFIND__

#include <iostream>
// #include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int n)
{
		typename T::iterator it;

		it = std::find(std::begin(container), std::end(container), n);
		if (it == std::end(container))
			throw std::runtime_error("It can't be found");
		return it;
}

#endif
