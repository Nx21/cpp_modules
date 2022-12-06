/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:08:07 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 21:46:14 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSTRING_HPP
# define FTSTRING_HPP

# include <iostream>
# include <string>

class FtString
{

	public:

		FtString();
		FtString( FtString const & src );
		~FtString();
		FtString(std::string const &s);
		operator double() const;
		operator int() const;
		operator float() const;
		operator char() const;
		FtString &		operator=( FtString const & rhs );
		class TooBigNumber : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class TooSmallNumber : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class IndefindNumber : public std::exception
		{
			public :
				const char* what() const throw();
		};
	private:
		std::string _string;
};

std::ostream &			operator<<( std::ostream & o, FtString const & i );

#endif 