/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:10 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/30 22:38:49 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Unknown")
{
	std::cout << "creat a Animal" << std::endl;
}

Animal::Animal(const Animal & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << type << " Animal died" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return type;
}

void		Animal::setType(std::string const &t)
{
	this->type = t;
}

Animal 		&Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

void		Animal::makeSound(void) const
{
	
}