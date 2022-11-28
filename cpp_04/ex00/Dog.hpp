/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 04:31:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 04:42:46 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

class Dog
{

	public:

		Dog();
		Dog(Dog const & src );
		~Dog();
		Dog &operator=( Dog const & rhs );
	private:

};

#endif 