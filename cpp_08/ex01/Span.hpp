/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:24:57 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/08 21:28:15 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class Span
{
	public:
		Span();
		Span(size_t const &N);
		Span( Span const & src );
		~Span();
		void		addNumber(int const &a);
		void		addNumber(std::vector <int> cpy);
		void		addNumber(int const cpy[], int n);
		int			shortestSpan();
		int			longestSpan() ;
		Span &		operator=( Span const & rhs );
		void printlist();
		class FullArray : public std::exception
		{
			public :
				const char* what() const throw(){return "Full Array";};
		};
	private:
		std::vector <int>		_arr;
		size_t					_size;
		size_t					_maxSize;
};


#endif 