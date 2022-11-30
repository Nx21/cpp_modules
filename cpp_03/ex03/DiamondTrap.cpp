/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 00:40:31 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 03:05:43 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	name = "UNKOWN";
	energyPoint = 50;
	ClapTrap::name = name + "_clap_name";
	std::cout << "OMG! you creat a monter" << std::endl;
}

DiamondTrap::DiamondTrap(std::string s): ScavTrap(), FragTrap()
{
	name = s;
	energyPoint = 50;
	ClapTrap::name = name + "_clap_name";
	std::cout << "OMG! you creat a monter" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ): ScavTrap(src), FragTrap(src)
{
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->hitPoint = rhs.hitPoint;
		this->energyPoint = rhs.energyPoint;
		this->attackDamage = rhs.attackDamage;
		this->name = rhs.name;
		ClapTrap::name = name + "_clap_name";
	}
	return *this;
}

void		DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI()
{
	std::cout << "my realName is :" << name;
	std::cout << "\tmy clapName is :" << ClapTrap::name << std::endl;
}

