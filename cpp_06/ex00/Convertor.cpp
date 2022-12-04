/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:21:23 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/04 00:21:41 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"


Convertor::Convertor()
{
}

Convertor::Convertor(std::string s): _str(s) 
{
	_double = convert(s);
}

void	Convertor::convert(std::string input)
{
	const std::string arr[] = {"nan","+inf","+inff", "-inff", "-inf"};
	for (size_t i = 0; i < 5; i++)
		if (arr[i] == input)
			return printUndefine(input);
	if (input.size() == 1 && !std::isdigit(input[0]))
			return printChar(input);
	if (input.find_first_not_of("+-.0123456789f"))
					
}


Convertor::Convertor( const Convertor & src )
{
}


Convertor::~Convertor()
{
}

Convertor &				Convertor::operator=( Convertor const & rhs )
{
	
	return *this;
}
