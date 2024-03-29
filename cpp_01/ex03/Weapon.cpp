/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:20:48 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/26 22:37:45 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():type(NULL)
{
	
}

Weapon::Weapon(const std::string &s):type(s)
{
	
}

Weapon::Weapon(const Weapon &w)
{
	*this = w;
}

Weapon::~Weapon()
{
	std::cout << type << ": has been deleted" << std::endl;
}

Weapon &Weapon::operator=(const Weapon &w)
{
	this->type = w.type;
	return (*this);
}

const std::string	&Weapon::getType(void)
{
	return type;
}

void	Weapon::setType(const std::string &s)
{
	this->type = s;
}
