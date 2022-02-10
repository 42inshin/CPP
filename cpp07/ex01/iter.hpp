/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:30:52 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 17:16:57 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

template <typename T>
void iter(T* arr, int len, void (*fptr)(T const &))
{
	for (int i = 0; i < len; i++)
	{
		fptr(arr[i]);
	}
}

#endif
