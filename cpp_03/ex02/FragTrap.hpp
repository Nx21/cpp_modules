#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap(std::string s);
		FragTrap( FragTrap const & src );
		~FragTrap();
		void 			highFivesGuys(void);
		void			attack(const std::string &target);
		FragTrap &		operator=(FragTrap const & rhs);
	private:

};

#endif