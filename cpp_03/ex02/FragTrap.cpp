#include "FragTrap.hpp"

FragTrap::FragTrap(std::string s): ClapTrap(s)
{
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	std::cout << this->getName() << "🧝🤖 has been level up to FragTrap" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ):ClapTrap(src)
{
}

FragTrap::~FragTrap()
{
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives  ✋" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		FragTrap *p = new FragTrap(rhs);
		return *p;
	}
	return *this;
}
