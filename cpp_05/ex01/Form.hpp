#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form(std::string name, int sgrade, int egrade);
		Form( Form const & src );
		~Form();
		Form &		operator=( Form const & rhs );
		std::string	getName(void) const;
		int			getGradeSigne(void) const;
		int			getGradeExecute(void) const;
		bool		isSigned(void) const;
		void		beSigned(Bureaucrat const &bureaucrat);



		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};
	private:
		const std::string	_name;
		const int			_gradeSigned;
		const int			_gradeExcute;
		bool				_signed;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif 