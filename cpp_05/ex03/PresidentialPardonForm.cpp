/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:10:11 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:48:52 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm():Form("UNKOWN", 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):Form(target, 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):Form(src)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw FormnotSigned();
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	std::cout << "drill noise....." <<  std::endl;
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" <<  std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	new (this) PresidentialPardonForm(rhs);
	return *this;
}
