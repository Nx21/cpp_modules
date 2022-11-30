/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:19:00 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/28 21:49:42 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string s);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		void			attack(const std::string &target);
		void	 		guardGate();
		ScavTrap &		operator=( ScavTrap const & rhs );
	private:

};

#endif 