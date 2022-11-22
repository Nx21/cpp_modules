#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const &src);
		Fixed(const float f);
		Fixed(const int n);
		~Fixed();
		int getRawBits( void ) const;	
		void setRawBits( int const raw );
		Fixed 		&operator=(Fixed const & rhs);
		float toFloat( void ) const;
		int toInt( void ) const;
		bool 		operator>=(Fixed const & rhs) const;
		bool		operator<=(Fixed const & rhs) const;
		bool		operator>(Fixed const & rhs) const;
		bool		operator<(Fixed const & rhs) const;
		bool		operator==(Fixed const & rhs) const;
		bool		operator!=(Fixed const & rhs) const;
		Fixed		operator+(Fixed const & rhs) const;
		Fixed		operator-(Fixed const & rhs) const;
		Fixed		operator*(Fixed const & rhs) const;
		Fixed		operator/(Fixed const & rhs) const;
		Fixed		&operator++(void);
		Fixed		operator++(int);
		Fixed		&operator--(void);
		Fixed		operator--(int);
		static Fixed	max(Fixed const &F1, Fixed const &F2);
		static Fixed	min(Fixed const &F1, Fixed const &F2);
	private:
		int					value;
		static const int	fracBits = 8;
};
std::ostream &operator<<( std::ostream & o, Fixed const &F);
#endif