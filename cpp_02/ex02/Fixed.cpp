/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:40:32 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/01 23:37:57 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = int(f * (1 << this->fracBits));
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = n << this->fracBits;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int		Fixed::getRawBits( void ) const
{
	return value;
}

float	Fixed::toFloat( void ) const
{
	return (float) this->value / (1 << this->fracBits);
}

int		Fixed::toInt( void ) const
{
	return (this->value >= 0 ? 1 : -1) * (abs(this->value) >> this->fracBits);
}

Fixed	&Fixed::operator=( Fixed const & rhs )
{
	// std::cout << "Copy assignment operator called"  << std::endl;
	this->value = rhs.getRawBits();
	return *this;
}



bool 		Fixed::operator>=( Fixed const & rhs) const
{
	return (value >= rhs.getRawBits());
}

bool 		Fixed::operator>( Fixed const & rhs ) const
{
	return (value > rhs.getRawBits());
}

bool 		Fixed::operator<=( Fixed const & rhs ) const
{
	return (value <= rhs.getRawBits());
}

bool 		Fixed::operator<( Fixed const & rhs ) const
{
	return (value < rhs.getRawBits());
}

bool 		Fixed::operator==( Fixed const & rhs ) const
{
	return (value == rhs.getRawBits());
}

bool 		Fixed::operator!=( Fixed const & rhs ) const
{
	return (value != rhs.getRawBits());
}

Fixed 		Fixed::operator+( Fixed const & rhs ) const
{
	Fixed	res;

	res.setRawBits(this->value + rhs.getRawBits());
	return res;
}

Fixed 		Fixed::operator-( Fixed const & rhs ) const
{
	Fixed	res;

	res.setRawBits(this->value - rhs.getRawBits());
	return res;
}

Fixed 		Fixed::operator*( Fixed const & rhs ) const
{
	Fixed	res;

	res.setRawBits(((long long)this->value * rhs.getRawBits()) >> res.fracBits);
	return res;
}

Fixed 		Fixed::operator/( Fixed const & rhs ) const
{
	Fixed	res;

	res.setRawBits(((long long)this->value << this->fracBits) / rhs.getRawBits());
	return res;
}

Fixed		Fixed::operator++(int)
{
	Fixed	res(*this);

	this->value++;
	return res;
}

Fixed		Fixed::operator--(int)
{
	Fixed	res(*this);

	this->value--;
	return res;
}

Fixed		&Fixed::operator++(void)
{
	this->value++;
	return *this;
}

Fixed		&Fixed::operator--(void)
{
	this->value--;
	return *this;
}

Fixed		Fixed::max(Fixed const &F1, Fixed const &F2)
{
	return F1 > F2 ? Fixed(F1) : Fixed(F2);
}

Fixed		Fixed::min(Fixed const &F1, Fixed const &F2)
{
	return F1 < F2 ? F1 : F2;
}

Fixed		Fixed::max(Fixed &F1, Fixed &F2)
{
	return F1 > F2 ? F1 : F2;
}

Fixed		Fixed::min(Fixed &F1, Fixed &F2)
{
	return F1 < F2 ? F1 : F2;
}