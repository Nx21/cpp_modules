/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 02:22:27 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 04:57:57 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <class T> class Array
{
	
	private:
		T		*arr;
		size_t	_size;
	public:

		Array();
		Array(size_t const &n);
		Array( Array const & src );
		~Array();
		Array 		&operator=(Array const & rhs);
		T			&operator[](size_t const &i);
};

#endif