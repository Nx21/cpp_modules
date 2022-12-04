/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 06:04:42 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:48:27 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void) src;
}

Intern::~Intern()
{
}

Form   *Intern::makeShrubbery(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

Form   *Intern::makeRobotomy(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

Form   *Intern::makePresidential(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &formName, std::string const &target)
{
    const t_form arrForm[3] = {
                            {&Intern::makeRobotomy,"robotomy request"},
                            {&Intern::makeShrubbery,"shrubbery request"},
                            {&Intern::makePresidential,"presidential request"}
                            };
    
    for (size_t i = 0; i < 3;i++)
        if (arrForm[i].str == formName)
            return (this->*arrForm[i].form)(target);
    throw InvalidFormName();
}

Intern	&Intern::operator=( Intern const & rhs )
{
	(void) rhs;
	return *this;
}

const char	*Intern::InvalidFormName::what() const throw()
{
	return "Invalid form name";
}