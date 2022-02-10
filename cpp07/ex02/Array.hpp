/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:37:31 by inshin            #+#    #+#             */
/*   Updated: 2022/02/11 02:20:55 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

template <typename T>
class Array
{
private:
	T*	arr;
	int	len;

public:
	Array()
	{
		len = 0;
		arr = NULL;
	}

	Array(unsigned int n)
	{
		len = static_cast<int>(n);
		arr = new T[len];
	}

	Array(const Array& ref)
	{
		len = ref.len;
		if (len)
			arr = new T[len];
		for (int i = 0; i < len; i++)
		{
			arr[i] = ref.arr[i];
		}
	}

	Array& operator=(const Array& ref)
	{
		len = ref.len;
		if (len)
			arr = new T[len];
		for (int i = 0; i < len; i++)
			arr[i] = ref.arr[i];
		return *this;
	}

	~Array()
	{
		if (arr)
			delete[] arr;
	}

	T& operator[](int idx)
	{
		if(idx < 0 || idx >= len)
			throw OutOfLimitsException();
		return arr[idx];
	}

	int size() const
	{
		return len;
	}

	class OutOfLimitsException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "This element is out of the limits.";
		}
	};
};

#endif
