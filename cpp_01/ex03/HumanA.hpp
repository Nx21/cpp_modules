/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:36:25 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/17 22:51:17 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>
class HumanA
{
	public :
		HumanA(const std::string &nam, Weapon &w);
		~HumanA();
		HumanA(const HumanA &human);
		void		attack();
		void		setWeapon( Weapon &w);
		void		setName(const std::string nam);
		HumanA		&operator=(const HumanA &h);
		
	private:
		std::string name;
		Weapon &weapon;
};
#endif