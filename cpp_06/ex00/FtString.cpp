/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:06:29 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 21:46:52 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtString.hpp"

FtString::FtString():_string("0")
{
}

FtString::FtString(std::string const &s):_string(s)
{
}

FtString::FtString( const FtString & src )
{
	*this = src;
}


FtString::~FtString()
{
}

FtString		&FtString::operator=( FtString const & rhs )
{
	if ( this != &rhs )
	{
		this->_string = rhs._string;
	}
	return *this;
}

FtString::operator double() const
{
	const std::string arr[] = {"+inf","+inff","-inf", "-inff", "nan", "nanf"};
	for (size_t i = 0; i < 2; i++)
		if (arr[i] == _string)
			throw TooBigNumber();
	for (size_t i = 2; i < 4; i++)
		if (arr[i] == _string)
			throw TooSmallNumber();
	for (size_t i = 4; i < 6; i++)
		if (arr[i] == _string)
			throw IndefindNumber();
	if (_string.size() == 1 && !std::isdigit(_string[0]))
			return int(*this);
	if (_string.find_first_not_of("+-.0123456789f") != std::string::npos\
		|| _string.find_first_of(".") != _string.find_last_of(".")\
		|| _string.find_first_of("+-") != _string.find_last_of("+-")\
		|| _string.find_first_of("f") != _string.find_last_of("f")\
		|| (_string.find_first_of("f") != std::string::npos && _string.find_first_of("f") != _string.size() - 1)\
		|| (_string.find_first_of("+-") != std::string::npos && _string.find_first_of("+-") != 0)
		|| (_string.find_first_of("0123456789f") == std::string::npos))
			throw IndefindNumber();
	return stod(_string);
}

FtString::operator float() const
{
	const std::string arr[] = {"+inf","+inff","-inf", "-inff", "nan", "nanf"};
	for (size_t i = 0; i < 2; i++)
		if (arr[i] == _string)
			throw TooBigNumber();
	for (size_t i = 2; i < 4; i++)
		if (arr[i] == _string)
			throw TooSmallNumber();
	for (size_t i = 4; i < 6; i++)
		if (arr[i] == _string)
			throw IndefindNumber();
	if (_string.size() == 1 && !std::isdigit(_string[0]))
			return int(*this);
	if (_string.find_first_not_of("+-.0123456789f") != std::string::npos\
		|| _string.find_first_of(".") != _string.find_last_of(".")\
		|| _string.find_first_of("+-") != _string.find_last_of("+-")\
		|| _string.find_first_of("f") != _string.find_last_of("f")\
		|| (_string.find_first_of("f") != std::string::npos && _string.find_first_of("f") != _string.size() - 1)\
		|| (_string.find_first_of("+-") != std::string::npos && _string.find_first_of("+-") != 0)
		|| (_string.find_first_of("0123456789f") == std::string::npos))
			throw IndefindNumber();
	return stof(_string);
}



FtString::operator int() const
{
	if (_string.size() == 1 && !std::isdigit(_string[0]))
		return _string[0];
	double tmp = double(*this);
	(void)tmp;
	return stoi(_string);
}

FtString::operator char() const
{
	int _int;
	try
	{
		_int = int(*this);
	}
	catch(const std::exception& e)
	{
		throw e;
	}
	
	if(_int >= 32 && _int < 127)
		return char(_int);
	else if (_int >= 0 && _int < 127)
		throw IndefindNumber();
	throw std::out_of_range("");
}

const char*		FtString::TooBigNumber::what() const throw()
{
	return "number too big";
}

const char*		FtString::TooSmallNumber::what() const throw()
{
	return "number too small";
}

const char*		FtString::IndefindNumber::what() const throw()
{
	return "Indefind Number";
}

std::ostream	&operator<<( std::ostream & o, FtString const & _String)
{
	char	_char;
	int		_int = 0;
	float	_float = 0;
	double	_double = 0;
	
	try
	{
		_char = static_cast<char> (_String);
		o << "char: '" << _char << "'" << std::endl;
	}
	catch(const FtString::IndefindNumber &e)
	{
		o << "char: Non displayable" << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "char: impossible" << std::endl;
	}
	try
	{
		_int = static_cast<int> (_String);
		o << "int: " << _int << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "int: impossible" << std::endl;
	}
	try
	{
		_float = static_cast<float> (_String);
		if(_float != _int)
			o << "float: " << _float << "f" << std::endl;
		else
			o << "float: " << _float << ".0f" << std::endl;
	}
	catch(const FtString::TooBigNumber & e)
	{
		o << "float: +inff" << std::endl;
	}
	catch(const FtString::TooSmallNumber & e)
	{
		o << "float: -inff" << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "float: nanf" << std::endl;
	}
	try
	{
		_double = static_cast<float> (_String);
		if(_double != _int)
			o << "double: " << _double << "f" << std::endl;
		else
			o << "double: " << _double << ".0" << std::endl;
	}
	catch(const FtString::TooBigNumber & e)
	{
		o << "double: +inf" << std::endl;
	}
	catch(const FtString::TooSmallNumber & e)
	{
		o << "double: -inf" << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "double: nan" << std::endl;
	}
	return o;
}


