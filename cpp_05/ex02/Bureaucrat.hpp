/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:25:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:59:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string const &s);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat	&operator=( Bureaucrat const & rhs );
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		setGrade(int grade);
		void		increment(void);
		void		increment(int const &i);
		void		decrement(void);
		void		decrement(int const &i);
		void		signForm(Form &form) const;
		void		executeForm(Form const & form);
		
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
		const std::string 	_name;
		int					_grade;
};
std::ostream &operator<<( std::ostream & o, Bureaucrat const &F);

#endif 