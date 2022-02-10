/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:53:01 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 16:12:10 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
#define __WHATEVER_H__

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T& min(const T& a, const T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
const T& max(const T& a, const T& b)
{
	if (a > b)
		return a;
	return b;
}

#endif
