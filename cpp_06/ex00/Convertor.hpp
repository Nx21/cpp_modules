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
		Convertor &		operator=( Convertor const & rhs );
		typedef struct s_pair
		{
			std::string key;
			double		val;
		} t_pair;
	private:
		std::string _str;
		double		_double;

};

std::ostream &			operator<<( std::ostream & o, Convertor const & i );

#endif