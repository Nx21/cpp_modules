/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:54:57 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/14 14:41:20 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
#include <fstream>
#include <map>
#include <vector>


class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();
		BitcoinExchange &		operator=( BitcoinExchange const & src);
		void	get_data(std::string &data);
		void	add_data(std::string	&data);
		void	get_date_exchange(std::string	&data);
		int		getdate(std::string &date);
		float		getrate(std::string &rate);
		void	getres(std::string &input);
	private:
		std::map<int, float, std::greater<int> > _data;
};
void trim(std::string &s);

#endif