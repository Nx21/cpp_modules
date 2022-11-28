/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 04:39:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
}

Cat::Cat( const Cat & src ): Animal(src)
{
	
}


Cat::~Cat()
{
}



Cat &				Cat::operator=( Cat const &rhs)
{
	Cat *c = new Cat(rhs);
	return *c;
}
