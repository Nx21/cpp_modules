#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>
# include <string>

class Convertor
{

	public:

		Convertor();
		Convertor( Convertor const & src );
		~Convertor();

		Convertor &		operator=( Convertor const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Convertor const & i );

#endif