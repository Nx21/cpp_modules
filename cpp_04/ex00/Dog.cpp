/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:18 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 23:04:32 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog";
	std::cout << "creat a Dog" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
}

Dog::~Dog()
{
	std::cout << "Dog died" << std::endl;
}




Dog 	&Dog::operator=(Dog const & rhs)
{
	new (this) Dog(rhs);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "This animal bark" << std::endl;
}