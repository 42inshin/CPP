/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:24:37 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 02:57:02 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H__
#define __DATA_H__

#include <iostream>
#include <string>
#include <cstdint> // uintptr_t
// uintptr_t: unsigned int pointer type
// 포인터 주소를 저장하는데 사용한다. 다른 환경으로 이식이 가능하다. 이식할때는 캐스팅을 하자.

struct Data
{
	std::string name;
	int			age;
	int			weight;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
