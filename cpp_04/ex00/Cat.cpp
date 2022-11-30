/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 23:04:48 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "creat a Cat" << std::endl;
}

Cat::Cat( const Cat & src ): Animal(src)
{
	
}


Cat::~Cat()
{
	std::cout << "Cat died" << std::endl;
}



Cat 	&Cat::operator=( Cat const &rhs)
{
	new(this) Cat(rhs);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "This animal Meowing" << std::endl;
}