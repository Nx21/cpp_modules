#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <set>
# include <vector>

class Span
{
	public:
		Span();
		Span(size_t const &N);
		Span( Span const & src );
		~Span();
		void		addNumber(int const &a);
		int			shortestSpan();
		int			longestSpan();
		Span &		operator=( Span const & rhs );
		
	private:
		int		*_arr;
		size_t	_size;
		size_t	_maxSize;
};


#endif 