/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:36:52 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/26 00:33:30 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
# include <iostream>
class Weapon
{
	public :
		Weapon();
		Weapon(const std::string &s);
		~Weapon();
		Weapon(const Weapon &w);
		void		setType(const std::string &s);
		std::string	getType();
		Weapon	&operator=(const Weapon &w);
		
	private:
		std::string	type;
};
#endif