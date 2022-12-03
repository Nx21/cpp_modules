/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:26:20 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 00:55:33 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"



AForm::AForm():_name("UNKNOWN"),
			_gradeSigned(150),
			_gradeExcute(150),
			_signed(false)
{
	std::cout << "default constractor of AForm called" << std::endl;
}

AForm::AForm(std::string name, int sgrade, int egrade):_name(name),
										_gradeSigned(sgrade),
										_gradeExcute(egrade),
										_signed(false)
{
	if (_gradeSigned > 150  || _gradeExcute > 150)
		throw GradeTooLowException();
	if (_gradeSigned <= 0 || _gradeExcute <= 0)
		throw GradeTooHighException();
	std::cout << "constractor of AForm called" << std::endl;
}

AForm::AForm( const AForm & src ):_name(src._name),
								_gradeSigned(src._gradeSigned),
								_gradeExcute(src._gradeExcute),
								_signed(src._signed)
{
	if (_gradeSigned > 150  || _gradeExcute > 150)
		throw GradeTooLowException();
	if (_gradeSigned <= 0 || _gradeExcute <= 0)
		throw GradeTooHighException();
	std::cout << "copy constractor of AForm  called" << std::endl;
}

AForm::~AForm()
{
}

std::string			AForm::getName(void) const
{
	return _name;
}

int					AForm::getGradeSigne(void) const
{
	return _gradeSigned;
}

int					AForm::getGradeExecute(void) const
{
	return _gradeExcute;
}

bool				AForm::isSigned(void) const
{
	return _signed;
}

AForm &AForm::operator=( AForm const & rhs)
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & aForm )
{
	o << "the Form " << aForm.getName();
	o << ", with required grade " << aForm.getGradeSigne() << " to sign it";
	o << ", with required grade " << aForm.getGradeExecute() << " to execute it, ";
	o << (aForm.isSigned() ? "is signed" : "is not signed") << std::endl;
	return o;
}

void		AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSigned)
	{
		std::cout << "here\n";
		throw GradeTooLowException();
	}
	_signed = true;
}



const char	*AForm::GradeTooLowException::what() const throw()
{
	return "the grade is too low";
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return "the grade is too high";
}

const char	*AForm::FormnotSigned::what() const throw()
{
	return "the form is not signed";
}