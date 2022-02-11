/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:18:36 by inshin            #+#    #+#             */
/*   Updated: 2022/02/11 18:47:13 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int n)
{
		typename T::iterator it = std::find(container.begin(), container.end(), n);
		if (it == container.end())
			throw std::runtime_error("it can’t be found");
		return it;
}


int main(void)
{
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);

	std::vector<int>::iterator it = begin(v);
	while (it != end(v))
	{
		std::cout << *it++ << std::endl;
	}
	try {
		it = easyfind(v, 8);
		std::cout << "easyfind: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "error: " << e.what() << std::endl;
	}
	return 0;
}
