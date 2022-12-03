/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:25:16 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 00:51:56 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("UNKNOWN"),_grade(150)
{
	std::cout << "default constractor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &s): _name(s),_grade(150)
{
	std::cout << "default constractor called" << std::endl;
}




Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src._name)
{
	if (src._grade > 150)
		throw GradeTooLowException();
	if (src._grade <= 0)
		throw GradeTooHighException();
	std::cout << "copy constractor called" << std::endl;
	this->_grade = src._grade;
}


Bureaucrat::~Bureaucrat()
{
}


Bureaucrat	&Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		new (this) Bureaucrat(rhs);
	}
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int			Bureaucrat::getGrade(void) const
{
	return _grade;
}

void			Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade <= 0)
		throw GradeTooHighException();
	_grade = grade; 
}

void		Bureaucrat::decrement(void)
{
	this->decrement(1);
}

void		Bureaucrat::increment(void)
{
	this->increment(1);
}

void		Bureaucrat::decrement(int const &i)
{
	if (this->_grade + i > 150)
		throw GradeTooLowException();
	this->_grade += i;
}

void			Bureaucrat::increment(int const &i)
{
	if (this->_grade - i <= 0)
		throw GradeTooHighException();
	this->_grade -= i;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade ";
	o << bureaucrat.getGrade() << std::endl;
	return o;
}

void			Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << "  couldn’t sign " << form.getName();
		std::cerr << " because " << e.what() << '\n';
	}
	
}



const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "the grade is too high";
}


const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "the grade is too low";
}
