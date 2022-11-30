/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 22:55:44 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog(Dog const & src );
		~Dog();
		Dog 	&operator=( Dog const & rhs );
		void	makeSound(void) const;
	private:

};

#endif 