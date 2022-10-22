/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:33:07 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/22 16:16:12 by nhanafi          ###   ########.fr       */
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
		Zombie(const Zombie& zombie);
        Zombie(std::string s);
        // Zombie();
		void setname(std::string &s);
		~Zombie();
};
Zombie* zombieHorde(int N, std::string name);
#endif