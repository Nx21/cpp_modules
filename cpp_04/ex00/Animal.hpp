/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 04:31:07 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		Animal(std::string const &t);
		~Animal();
		const std::string		&getType(void) const;
		void					setType(std::string const &t);
		Animal 					&operator=( Animal const & rhs );
		void					makeSound(void);
	private:
		std::string type;

};


#endif