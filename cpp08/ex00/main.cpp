/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:18:36 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 04:28:57 by inshin           ###   ########seoul.kr  */
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
	std::vector<int>::iterator v_it = vc.begin();
	while (v_it != vc.end())
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
	std::list<int>::iterator l_it = ls.begin();
	while (l_it != ls.end())
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
