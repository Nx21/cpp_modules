/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:18 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/30 09:31:22 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "creat a Dog" << std::endl;
}

Dog::Dog(const Dog &src)
{
	type = src.type;
	brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	delete brain;
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
