/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 23:31:33 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << "creat a Cat" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ): WrongAnimal(src)
{
	
}


WrongCat::~WrongCat()
{
	std::cout << "Cat died" << std::endl;
}



WrongCat 	&WrongCat::operator=( WrongCat const &rhs)
{
	new(this) WrongCat(rhs);
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "This animal Meowing" << std::endl;
}