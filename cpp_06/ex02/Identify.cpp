/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:03:40 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 00:02:59 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	default:
		return new C();
	}
}

void identify(Base* p)
{
	Base *base;
	if ((base = dynamic_cast<A*>(p)) != NULL)
		std::cout << "type of the base is A" << std::endl;;
	if ((base = dynamic_cast<B*>(p)) != NULL)
		std::cout << "type of the base is B" << std::endl;;
	if ((base = dynamic_cast<C*>(p)) != NULL)
		std::cout << "type of the base is C" << std::endl;;
	(void)base;
}

void identify(Base& p)
{
	static int i = 0;
	Base base;
	try
	{
		switch (i)
		{
			case 0:
				base = dynamic_cast<A&>(p);
				break;
			case 1:
				base = dynamic_cast<B&>(p);
				break;
			case 2:
				base = dynamic_cast<C&>(p);
				break;
			default :
				std::cout << "type of the base is UNKNOWN"  << std::endl;
				return;
		}
	}
	catch(const std::exception& e)
	{
		i++;
		return identify(p);
	}
	switch (i)
	{
	case 0:
		std::cout << "type of the base is A" << std::endl;
		return;
	case 1:
		std::cout << "type of the base is B" << std::endl;
		return;
	default:
		std::cout << "type of the base is C" << std::endl;
		return;
	}
}