/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:18:36 by inshin            #+#    #+#             */
/*   Updated: 2022/02/11 20:59:43 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	std::vector<int> vc;
	std::list<int> ls;
	// initialize
	for (int i = 0; i < 10; i++)
	{
		vc.push_back(i * 21);
		ls.push_back(i);
	}

	// vector
	std::cout << "======== vector ========" << std::endl;
	std::vector<int>::iterator v_it = begin(vc);
	while (v_it != end(vc))
		std::cout << *v_it++ << " ";
	std::cout << std::endl;
	// easyfind
	try
	{
		std::vector<int>::iterator vit = easyfind(vc, 42);
		std::cout << "easyfind: " << *vit << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "[error] " << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator vit = easyfind(vc, 1000);
		std::cout << "easyfind: " << *vit << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "[error] " << e.what() << std::endl;
	}

	// list
	std::cout << "======== list ========" << std::endl;
	std::list<int>::iterator l_it = begin(ls);
	while (l_it != end(ls))
		std::cout << *l_it++ << " ";
	std::cout << std::endl;
	// easyfind
	try
	{
		std::list<int>::iterator vit = easyfind(ls, 7);
		std::cout << "easyfind: " << *vit << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "[error] " << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator vit = easyfind(ls, -10);
		std::cout << "easyfind: " << *vit << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "[error] " << e.what() << std::endl;
	}
	return 0;
}
