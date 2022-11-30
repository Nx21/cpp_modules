/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 01:03:42 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 01:03:43 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string s);
		FragTrap( FragTrap const & src );
		~FragTrap();
		void 			highFivesGuys(void);
		void			attack(const std::string &target);
		FragTrap &		operator=(FragTrap const & rhs);
	private:

};

#endif