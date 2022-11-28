/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:40:32 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/28 00:57:39 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called"  << std::endl;
	value = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called"  << std::endl;
	return value;
}



Fixed &			Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called"  << std::endl;
	this->value = rhs.getRawBits();
	return *this;
}