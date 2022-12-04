/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:26:20 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:11:23 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form():_name("UNKNOWN"),
			_gradeSigned(150),
			_gradeExcute(150),
			_signed(false)
{
	std::cout << "default constractor of form called" << std::endl;
}

Form::Form(std::string name, int sgrade, int egrade):_name(name),
										_gradeSigned(sgrade),
										_gradeExcute(egrade),
										_signed(false)
{
	if (_gradeSigned > 150  || _gradeExcute > 150)
		throw GradeTooLowException();
	if (_gradeSigned <= 0 || _gradeExcute <= 0)
		throw GradeTooHighException();
	std::cout << "constractor of form called" << std::endl;
}

Form::Form( const Form & src ):_name(src._name),
								_gradeSigned(src._gradeSigned),
								_gradeExcute(src._gradeExcute),
								_signed(src._signed)
{
	if (_gradeSigned > 150  || _gradeExcute > 150)
		throw GradeTooLowException();
	if (_gradeSigned <= 0 || _gradeExcute <= 0)
		throw GradeTooHighException();
	std::cout << "copy constractor of form  called" << std::endl;
}

Form::~Form()
{
}

std::string			Form::getName(void) const
{
	return _name;
}

int					Form::getGradeSigne(void) const
{
	return _gradeSigned;
}

int					Form::getGradeExecute(void) const
{
	return _gradeExcute;
}

bool				Form::isSigned(void) const
{
	return _signed;
}

Form &				Form::operator=( Form const & rhs )
{
	new(this) Form(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & form )
{
	o << "the form " << form.getName();
	o << ", with required grade " << form.getGradeSigne() << " to sign it";
	o << ", with required grade " << form.getGradeExecute() << " to execute it, ";
	o << (form.isSigned() ? "is signed" : "is not signed") << std::endl;
	return o;
}

void		Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSigned)
		throw GradeTooLowException();
	_signed = true;
}



const char	*Form::GradeTooLowException::what() const throw()
{
	return "the grade is too low";
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "the grade is too high";
}
