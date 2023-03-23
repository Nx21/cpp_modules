/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:54:56 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/21 16:43:37 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & src )
{
	if ( this != &src )
	{
		this->_data = src._data;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int		BitcoinExchange::getdate(std::string &date)
{
	int vec[] = {1 , -1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
	if (std::count(date.begin(), date.end(), '-') != 2
		|| date.find_first_not_of("0123456789-") != date.npos)
		throw "invalid date";
	std::string year = date.substr(0, date.find_first_of('-'));
	std::string mounth = date.substr(date.find_first_of('-') + 1, date.find_last_not_of('-') - date.find_first_of('-'));
	std::string day = date.substr(date.find_last_of('-') + 1);
	int res, yint, dint, mint;
	yint = atol(year.c_str());
	mint = atol(mounth.c_str());
	dint = atol(day.c_str());
	if (yint > 9999 || yint <= 0)
		throw "invalid year";
	if (mint > 12 || mint <= 0)
		throw "invalid mounth";
	if (dint > 30 + vec[mint - 1] || dint <= 0)
		throw "invalid day";
	if (mint == 2 && dint == 29 && 
		!((!(yint % 4) && (yint % 100)) || yint % 400))
		throw "invalid day";
	res = yint * 13;
	res += mint;
	res = res * 32 + dint;
	return res;
}

float		BitcoinExchange::getrate(std::string &rate)
{
	if (rate.empty() || rate.find_first_not_of("0123456789.") != rate.npos 
	|| rate.find_first_of(".") !=  rate.find_last_of("."))
		throw "not a positive number.";
	return atof(rate.c_str());
}




void	BitcoinExchange::get_date_exchange(std::string &data)
{
	
	if (data.find(',') == data.npos)
	{
		throw "invalid line";
	}
	std::string date = data.substr(0, data.find(','));
	std::string rate = data.substr(data.find(',') + 1);
	_data[getdate(date)] = getrate(rate);
}

void	BitcoinExchange::get_data(std::string &data)
{
	std::string tmp;
	tmp = data.find("\n") != data.npos ? data.substr(0, data.find('\n')) : data;
	data = data.find("\n") != data.npos ? data.substr(data.find('\n') + 1) : "";
	if (tmp != "date,exchange_rate" || tmp.empty())
		throw "error first line data.csv";
	add_data(data);
}

void	BitcoinExchange::add_data(std::string &data)
{
	std::string tmp;
	if (data.empty())
		return;
	tmp = data.find("\n") != data.npos ? data.substr(0, data.find('\n')) : data;
	data = data.find("\n") != data.npos ? data.substr(data.find('\n') + 1) : "";
	get_date_exchange(tmp);
	add_data(data);
}

void	BitcoinExchange::getres(std::string &input)
{
	float	value,res;
	int		date;
	std::string	tmp;

	if (input.empty())
		return;
	if (input.find_first_of("|") == input.npos)
	{
		std::cout << "Error: bad input => " << input << std::endl;
		return ;
	}
	try
	{
		tmp = input.substr(0, input.find_first_of("|"));
		trim(tmp);
		date = getdate(tmp);
		tmp = input.substr(input.find_first_of("|") + 1);
		trim(tmp);
		value = getrate(tmp);
		if (value > 1000)
			throw "too large number.";
		std::map<int, float>::iterator it = _data.lower_bound(date);
		if (it == _data.end())
			res = 0;
		else
			res = value * it->second;
		std::cout << input.substr(0, input.find_first_of(" |"));
		std::cout << " => " << value;
		std::cout << " = " << std::setprecision(9) << res << std::endl;
	}
	catch(const char *e)
	{
		std::cout << "Error: " << e << std::endl;
	}
	
}

/* ************************************************************************** */
void ltrim(std::string &s)
{
    size_t start = s.find_first_not_of(" \t");
    s =  (start == std::string::npos) ? "" : s.substr(start);
}
 
void rtrim(std::string &s)
{
    size_t end = s.find_last_not_of(" \t");
    s = (end == std::string::npos) ? "" : s.substr(0, end + 1);
}
 
void trim(std::string &s)
{
	ltrim(s);
    rtrim(s);
}