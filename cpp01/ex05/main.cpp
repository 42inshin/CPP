/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 05:19:00 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 06:41:21 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen k;

	k.complain("JUST DO IT");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("DEBUG");
	k.complain("ERROR");
	k.complain("none");
	return 0;
}
