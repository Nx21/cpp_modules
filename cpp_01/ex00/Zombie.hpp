/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:11:01 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 22:54:02 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
#define Zombie_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie &operator=(const Zombie& zombie);	
		void	announce(void);
		Zombie(std::string s);
		~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif