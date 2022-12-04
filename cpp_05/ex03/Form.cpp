/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:26:20 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:47:25 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form():_name("UNKNOWN"),
			_gradeSigned(150),
			_gradeExcute(150),
			_signed(false)
{
	std::cout << "default constractor of Form called" << std::endl;
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
	std::cout << "constractor of Form called" << std::endl;
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
	std::cout << "copy constractor of Form  called" << std::endl;
}

Form::~Form()
{
	std::cout << "deconstractor of Form called" << std::endl;
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

Form &Form::operator=( Form const & rhs)
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & aForm )
{
	o << "the Form " << aForm.getName();
	o << ", with required grade " << aForm.getGradeSigne() << " to sign it";
	o << ", with required grade " << aForm.getGradeExecute() << " to execute it, ";
	o << (aForm.isSigned() ? "is signed" : "is not signed") << std::endl;
	return o;
}

void		Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSigned)
	{
		std::cout << "here\n";
		throw GradeTooLowException();
	}
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

const char	*Form::FormnotSigned::what() const throw()
{
	return "the form is not signed";
}