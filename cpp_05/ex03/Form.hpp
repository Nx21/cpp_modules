/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:47:51 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:59:23 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

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
		virtual ~Form();
		Form &			operator=( Form const & rhs );
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

std::ostream &			operator<<(std::ostream & o, Form const & i);

#endif 