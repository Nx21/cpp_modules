/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:45:22 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/26 02:24:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP
# include "Weapon.hpp"
# include <iostream>
class HumanB
{
	public :
		HumanB(const std::string &nam);
		~HumanB();
		HumanB(const HumanB &contact);
		void		attack();
		void		setWeapon(Weapon &w);
		void		setName(const std::string &nam);
		HumanB		&operator=(const HumanB &c1);
		
	private:
		std::string name;
		Weapon		*weapon;
};
#endif