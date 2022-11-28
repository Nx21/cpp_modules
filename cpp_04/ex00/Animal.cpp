/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:10 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 04:39:56 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Unknown")
{
}

Animal::Animal(const Animal & src)
{
	*this = src;
}

Animal::Animal(std::string const &t):type(t)
{
	
}


Animal::~Animal()
{

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

void		Animal::makeSound(void)
{
	if (type == "Cat")
		std::cout << "This animal Mwowing" << std::endl;
	else if(type == "Dog")
		std::cout << "This animal bark" << std::endl;
	else if (type == "Unknown")
		std::cout << "Unkown Animal" << std::endl;
	else
		std::cout << "Unkown sound" << std::endl;
}