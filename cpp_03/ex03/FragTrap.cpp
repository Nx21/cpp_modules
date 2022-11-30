/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 01:03:37 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 01:03:38 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << this->name << " has been level up to FragTrap🤖" << std::endl;
}

FragTrap::FragTrap(std::string s): ClapTrap(s)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << this->name << " has been level up to FragTrap🤖" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ):ClapTrap(src)
{
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " has been level down from FragTrap🤖" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap🤖 " << this->name;
	if (this->energyPoint && this->hitPoint)
		std::cout << ": \"high fives  ✋!?\"" << std::endl;
	else if (!this->hitPoint)
		std::cout << " doesn\'t have enough hit point to ask for high five"<< std::endl;
	else if (!this->energyPoint)
		std::cout << " doesn\'t have enough energy point to ask for high five"<< std::endl;

}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap🤖 " << this->name;
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

FragTrap &FragTrap::operator=( FragTrap const & rhs )
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
