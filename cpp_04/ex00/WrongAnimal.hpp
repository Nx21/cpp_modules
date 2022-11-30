/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 23:32:24 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal(std::string const &t);
		~WrongAnimal();
		const std::string		&getType(void) const;
		void					setType(std::string const &t);
		WrongAnimal 					&operator=( WrongAnimal const & rhs );
		void					makeSound(void) const;
	protected:
		std::string type;

};


#endif