/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:37:31 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 18:06:15 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

template <typename T>
class Array
{
private:
	unsigned int size;

public:
	Array();
	Array(unsigned int n) // 기본값 초기화 해줘야 함
	{

	}
	Array(const Array& ref) // 깊은 복사
	{

	}
	Array& operator=(const Array& ref) // 깊은 복사
	{

	}
	T& operator[](unsigned int i)
	{

	}
	unsigned int size() const
	{
		return size;
	}

	class OutOfLimitsException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "This element is out of the limits."
		}
	}
};

#endif
