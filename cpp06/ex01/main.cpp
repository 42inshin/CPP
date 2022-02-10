/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:07:43 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 13:47:57 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Data.hpp"

int main(void)
{
	Data id;

	id.name = "inshin";
	id.age =  33;
	id.weight = 77;

	std::cout << std::setw(30) << "Data ptr addr: " << &id << std::endl;

	uintptr_t serial = serialize(&id);
	std::cout << std::setw(30) << "serialized decimal ptr addr: " << serial << std::endl;
	std::cout << std::setw(30) << "serialized hex ptr addr: "<< std::hex << serial << std::dec << std::endl;

	Data *deserial = deserialize(serial);
	std::cout << std::setw(30) << "deserialized ptr addr: "  << deserial << std::endl;

	std::cout << "id  : " << deserial->name << std::endl;
	std::cout << "age : " << deserial->age << std::endl;
	std::cout << "age : " << deserial->weight << std::endl;
}
