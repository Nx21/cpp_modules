/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:56:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:58:23 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main( void ) 
{
    srand(time(0));
    Intern  intern;
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(15);
        try
        {
            Form *form = intern.makeForm("shrubbery request", "1st_file");  
            std::cout << bureaucrat << *form;
            bureaucrat.signForm(*form); 
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl << std::endl;
    {
       Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(15);
        try
        {
            Form *form = intern.makeForm("presidential request", "2nd_file");  
            std::cout << bureaucrat << *form;
            bureaucrat.signForm(*form); 
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(15);
        try
        {
            Form *form = intern.makeForm("robotomy request", "3th_file");  
            std::cout << bureaucrat << *form;
            bureaucrat.signForm(*form); 
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl << std::endl;
    {
        Bureaucrat bureaucrat("nasr");
        bureaucrat.setGrade(15);
        try
        {
            Form *form = intern.makeForm("robotaaaaasfomy request", "4th_file");  
            std::cout << bureaucrat << *form;
            bureaucrat.signForm(*form); 
            bureaucrat.executeForm(*form);
            delete form;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
