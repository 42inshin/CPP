/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:07:43 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 02:58:20 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data id = {"inshin", 33, 77};
	std::cout << "Data addr: " << &id << std::endl;

	uintptr_t serial = serialize(&id);
	std::cout << "serialized decimal ptr addr: " << serial << std::endl;
	std::cout << "serialized hex ptr addr: "<< std::hex << serial << std::dec << std::endl;

	Data *deserial = deserialize(serial);
	std::cout << "deserialized ptr addr: "  << deserial << std::endl;

	std::cout << "id  : " << deserial->name << std::endl;
	std::cout << "age : " << deserial->age << std::endl;
	std::cout << "age : " << deserial->weight << std::endl;
}
