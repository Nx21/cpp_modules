#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{

	public:

		DiamondTrap();
		DiamondTrap(std::string s);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap();
		void 	attack(const std::string& target);
		DiamondTrap 	&operator=( DiamondTrap const & rhs );
		void			whoAmI();
	private:
		std::string		name;
};

#endif