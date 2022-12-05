/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 03:30:48 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "creat a Cat" << std::endl;
}

Cat::Cat( const Cat & src )
{
	type = src.type;
	brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat died" << std::endl;
}

Cat 	&Cat::operator=( Cat const &rhs)
{
	new (this) Cat(rhs);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "This animal Meowing" << std::endl;
}


