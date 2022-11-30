/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:10 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 23:29:24 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Unknown")
{
	std::cout << "creat a Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " Animal died" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	return type;
}

void		WrongAnimal::setType(std::string const &t)
{
	this->type = t;
}

WrongAnimal 		&WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Unkown sound" << std::endl;
}