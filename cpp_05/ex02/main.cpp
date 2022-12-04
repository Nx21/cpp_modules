/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:56:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:58:04 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main( void ) 
{
    srand(time(0));
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(15);
        Form *form = new ShrubberyCreationForm("shrubberry"); 
        std::cout << bureaucrat << *form;
        bureaucrat.signForm(*form); 
        bureaucrat.executeForm(*form);
        delete form;
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(1);
        Form *form = new PresidentialPardonForm("Presidential"); 
        std::cout << bureaucrat << *form;
        bureaucrat.signForm(*form); 
        bureaucrat.executeForm(*form);
        delete form;
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(15);
        Form *form = new RobotomyRequestForm("Robotomy"); 
        std::cout << bureaucrat << *form;
        bureaucrat.signForm(*form); 
        bureaucrat.executeForm(*form);
        delete form;
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(150);
        Form *form = new ShrubberyCreationForm("shrubberry"); 
        std::cout << bureaucrat << *form;
        bureaucrat.signForm(*form); 
        bureaucrat.executeForm(*form);
        delete form;
    }
}
