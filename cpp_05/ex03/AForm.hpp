#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class AForm
{

	public:

		AForm();
		AForm(std::string name, int sgrade, int egrade);
		AForm( AForm const & src );
		~AForm();
		AForm &			operator=( AForm const & rhs );
		std::string		getName(void) const;
		int				getGradeSigne(void) const;
		int				getGradeExecute(void) const;
		bool			isSigned(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
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
		class FormnotSigned : public std::exception
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

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif 