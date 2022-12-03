/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:18:25 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 05:59:18 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():AForm("UNKOWN", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):AForm(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src):AForm(src)
{
}


void			RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw FormnotSigned();
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	std::cout << "drill noise....." <<  std::endl;
	if (rand() % 2)
		std::cout << this->getName() << " has been robotomized" <<  std::endl;
	else
		std::cout << this->getName() << "  robotomy failed" <<  std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}


RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	new (this) RobotomyRequestForm(rhs);
	return *this;
}
