/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:40:32 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/19 20:29:19 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = int(f * (1 << this->fracBits));
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << this->fracBits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int		Fixed::getRawBits( void ) const
{
	return value;
}

Fixed	&Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called"  << std::endl;
	this->value = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat( void ) const
{
	return (float) this->value / (1 << this->fracBits);
}

int		Fixed::toInt( void ) const
{
	return (this->value >= 0 ? 1 : -1) * (abs(this->value) >> this->fracBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &F)
{
	o << F.toFloat();
	return o;
}