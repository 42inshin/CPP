/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 05:19:00 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 06:33:58 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Invaild arguments" << std::endl;
		return 0;
	}

	Karen k;
	k.complain(av[1]);
	return 0;
}
