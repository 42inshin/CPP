/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:30:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 17:34:55 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void printIn(T const &a)
{
	std::cout << a << " | ";
}

int main()
{
	// ===== int =====
	int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(numArr, 10, printIn);
	std::cout << std::endl;

	// ===== char =====
	char charArr[5] = {'h', 'e', 'l', 'l', 'o'};
	iter(charArr, 5, printIn);
	std::cout << std::endl;

	// ===== string =====
	std::string stringArr[3] = {"hello", "world", "inshin"};
	iter(stringArr, 3, printIn);
	std::cout << std::endl;

	return 0;
}

/*
class Awesome
{
public:
	Awesome( void ): _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream& operator<<(std::ostream& o, Awesome const & rhs) { o<<rhs.get(); return o;}

template<typename T>
void print(T const & x) {std::cout << x << std::endl; return;}
int main() {
	int tab[] = { 0, 1, 2, 3, 4 };

	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
*/
