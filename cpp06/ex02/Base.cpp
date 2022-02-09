/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:03:49 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 05:33:13 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base* generate(void) // 무작위로 A,B,C 인스턴스화
{
	std::srand(static_cast<unsigned int>(time(NULL)));
	switch (std::rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void identify(Base* p) // 형변환 실패 시 NULL 반환
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p) // 여기선 포인터 금지!
{ // NULL을 참조할 수 없기 때문에 형변환 실패 시 exception을 던진다
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast) {} // bad_cast는 참조 형식으로 캐스트 실패 시, 예외 결과를 받을 때 사용
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::bad_cast) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::bad_cast) {}
}

