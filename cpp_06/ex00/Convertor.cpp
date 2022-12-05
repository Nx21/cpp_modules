/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:21:23 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 02:32:00 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"


Convertor::Convertor()
{
}

Convertor::Convertor(std::string s): _str(s) 
{
	convert(s);
}

void	Convertor::convert(std::string input)
{
	const std::string arr[] = {"nan" ,"+inf","+inff", "-inff", "-inf"};
	for (size_t i = 0; i < 6; i++)
		if (arr[i] == input)
			return printUndefine(input);
	if (input.size() == 1 && !std::isdigit(input[0]))
			return printChar(input);
	if (input.find_first_not_of("+-.0123456789f") != std::string::npos\
		|| input.find_first_of(".") != input.find_last_of(".")\
		|| input.find_first_of("+-") != input.find_last_of("+-")\
		|| input.find_first_of("f") != input.find_last_of("f")\
		|| (input.find_first_of("f") != std::string::npos && input.find_first_of("f") != input.size() - 1)\
		|| (input.find_first_of("+-") != std::string::npos && input.find_first_of("+-") != 0)
		|| (input.find_first_of("0123456789f") == std::string::npos))
			return printerror();
	if (input.find_first_not_of("0123456789") != std::string::npos)
		return printint(input);	
	return printdouble(input);		
}

void	Convertor::printint(std::string input)
{
	_int = stoi(input);
	_double = stod(input);
	std::cout << "chat: ";
	if (32 <= _int && _int < 127)
		std::cout << "'" << char(_int) << "'" << std::endl;
	else if (0 <= _int && _int < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	if (_double < 2147483647 && _double >= -2147483648)
		std::cout << "int: " << _int << std::endl;
	else
		std::cout << "int: overflows" << std::endl;
	if (_double > 3.40282e+038 )
		std::cout << "float: +inff" << std::endl;
	else if (_double > 3.40282e+038 )
		std::cout << "float: -inff" << std::endl;
	else
		std::cout << "float: " << _double << ".0f" << std::endl;
	std::cout << "double: " << _double << ".0f" << std::endl;
	
}

void	Convertor::printUndefine(std::string input)
{
	if (input.find_first_of("f") != input.find_last_of("f"))
		input = input.substr(0, input.size() - 1);
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: "<< input << "f" << std::endl;
	std::cout << "double: "<< input << std::endl;
}

void	Convertor::printerror()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	Convertor::printChar(std::string input)
{
	
	std::cout << "char: '" << input << "'" << std::endl;
	std::cout << "int: " << input[0] + 0 <<std::endl;
	std::cout << "flat: " << input[0] + 0 << ".0f" << std::endl;
	std::cout << "double: " << input[0] + 0 << ".0" << std::endl;
}

void	Convertor::printdouble(std::string input)
{
	try
	{
		_int = stoi(input);
		std::cout << "chat: ";
		if (32 <= _int && _int < 127)
			std::cout << "'" << char(_int) << "'" << std::endl;
		else if (0 <= _int && _int < 32)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;	
		std::cout << "int: " << _int << std::endl;
	}
	catch(const std::exception& e)
	{
		_int = 0;
		std::cout << "chat: " << "impossible" << std::endl;
		std::cout << "int: overflows" << std::endl;
	}
	_double = stod(input);
	if (_double > 3.40282e+038 )
		std::cout << "float: +inff" << std::endl;
	else if (_double > 3.40282e+038 )
		std::cout << "float: -inff" << std::endl;
	else if (_double == _int)
		std::cout << "float: " << _double << ".0f" << std::endl;
	else
		std::cout << "float: " << _double << "f" << std::endl;
	if (_double == _int)
		std::cout << "float: " << _double << ".0" << std::endl;
	else
		std::cout << "double: " << _double << std::endl;
}




Convertor::Convertor( const Convertor & src)
{
	*this = src;
}


Convertor::~Convertor()
{
}

Convertor &				Convertor::operator=( Convertor const & rhs )
{
	this->_char = rhs._char;
	this->_double = rhs._double;
	this->_int = rhs._int;
	this->_str = rhs._str;
	return *this;
}
