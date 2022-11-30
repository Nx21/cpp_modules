/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:50:48 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/30 09:34:19 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain class created" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "brain class created" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "brain class removed" << std::endl;
}

Brain	&Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

