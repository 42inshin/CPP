/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:09:35 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 04:14:20 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
void print(MutantStack<T> mstack)
{
	typename MutantStack<T>::container_type::iterator it;
	it = mstack.begin();
	while (it != mstack.end())
		std::cout << *it++ << ' ';
	std::cout << std::endl;
}

int main()
{
	{
		std::cout << "======= <1> =======" << std::endl;
		// ------ pdf main.cpp start line ------
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		mstack.pop();
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		std::cout << "++it: " << *it << std::endl;
		--it;
		std::cout << "--it: " << *it << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		// ------ pdf main.cpp end line ------

		std::cout << "== copy test ==" << std::endl;
		std::cout << "<stack s>: ";
		while (!s.empty()) // 꺼내면서 출력해서 역순으로 나옵니다.
		{
			std::cout << s.top() << ' ';
			s.pop();
		}
		std::cout << std::endl;
		MutantStack<int> copy(mstack);
		std::cout << "<copy1>: ";
		print(copy);
		std::cout << "<copy2>: ";
		MutantStack<int> copy2 = copy;
		print(copy2);
	}
	{
		std::cout << "======= <2> =======" << std::endl;
		MutantStack<char> mstack;
		mstack.push(65);	// A
		mstack.push(66);	// B
		mstack.pop();	 	// delete B(top)
		mstack.push(67);	// C
		mstack.push(68);	// D
		mstack.push(69);	// E
		std::cout << "stack print:" << std::endl;
		print(mstack);
		std::cout << "size: " << mstack.size() << std::endl;
	}
	{
		std::cout << "======= <3> =======" << std::endl;
		MutantStack<int> mstack;
		for (int i = 1; i <= 10; i++)
			mstack.push(i);
		std::cout << "stack print:" << std::endl;
		print(mstack);
		std::cout << "size: " << mstack.size() << std::endl;

		int sum = 0;
		while (!mstack.empty())
		{
			sum += mstack.top();
			mstack.pop();
		}
		std::cout << "sum = " << sum << std::endl;
	}
	return 0;
}
