/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:24:37 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 15:37:06 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H__
#define __DATA_H__

#include <iostream>
#include <string>

// uintptr_t: unsigned integer pointer type
// 포인터 주소를 변환하고 다시 원래 포인터와 동일한 값으로 변환할 수 있는 정수형 타입이다.
// 해당 타입으로 변환 시 캐스팅이 필요하다.

struct Data
{
	std::string name;
	int			age;
	int			weight;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
