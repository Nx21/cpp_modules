/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 05:52:24 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 00:37:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << this->name << " has been level up to scavtrap👽" << std::endl;
}

ScavTrap::ScavTrap(std::string s): ClapTrap(s)
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << this->name << " has been level up to scavtrap👽" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src):ClapTrap(src)
{
	
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap👽 " << this->name;
	if (this->energyPoint && this->hitPoint)
	{
		this->energyPoint--;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->attackDamage;
		std::cout << " points of damage!" << std::endl;
		return ;
	}
	if (!this->hitPoint)
		std::cout << " doesn\'t have enough hit point to attack"<< std::endl;
	else if (!this->energyPoint)
		std::cout << " doesn\'t have enough energy point to attack"<< std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << this->name << " has been level down from scavtrap👽" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap👽 " << this->name;
	if (this->energyPoint && this->hitPoint)
		std::cout << " is now in Gate keeper mode" << std::endl;
	else if (!this->hitPoint)
		std::cout << " doesn\'t have enough hit point to gard the gate"<< std::endl;
	else if (!this->energyPoint)
		std::cout << " doesn\'t have enough energy point to gard the gate"<< std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const & rhs)
{
	if ( this != &rhs )
	{
		this->hitPoint = rhs.hitPoint;
		this->energyPoint = rhs.energyPoint;
		this->attackDamage = rhs.attackDamage;
		this->name = rhs.name;
	}
	return *this;
}


