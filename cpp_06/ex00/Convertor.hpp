#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>
# include <string>

class Convertor
{

	public:

		Convertor();
		Convertor(std::string s);
		Convertor( Convertor const & src );
		~Convertor();
		void convert(std::string input);
		Convertor	&operator=( Convertor const & rhs );
		void		printUndefine(std::string input);
		void		printChar(std::string input);
		void		printdouble(std::string input);
		void		printint(std::string input);
		void		printerror();
	private:
		std::string _str;
		double		_double;
		int			_int;
		char		_char;

};

std::ostream &			operator<<( std::ostream & o, Convertor const & i );

#endif