#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string s):ClapTrap(s)
{
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << this->getName() << " has been level up to scavtrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src):ClapTrap(src)
{
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << this->getName();
	if (this->getEnergyPoint() && this->getHitPoint())
	{
		this->setEnergyPoint(this->getEnergyPoint() - 1);
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		return ;
	}
	if (!this->getHitPoint())
		std::cout << "doesn\'t have enough hit point"<< std::endl;
	else if (!this->getEnergyPoint())
		std::cout << "doesn\'t have enough energy point"<< std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " has been level down from scavtrap" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName();
	if (this->getEnergyPoint() && this->getHitPoint())
		std::cout << " is now in Gate keeper mode" << std::endl;
	else if (!this->getHitPoint())
		std::cout << "doesn\'t have enough hit point"<< std::endl;
	else if (!this->getEnergyPoint())
		std::cout << "doesn\'t have enough energy point"<< std::endl;
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs)
{
	if ( this != &rhs )
	{
		ScavTrap *p = new ScavTrap(rhs);
		return *p;
	}
	return *this;
}


