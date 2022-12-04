/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:31:33 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:49:22 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form("UNKOWN", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):Form(src)
{
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	new (this) ShrubberyCreationForm(rhs);
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw FormnotSigned();
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	std::ofstream file((this->getName() + "_shrubbery").c_str());
	file << "                                                         .     " << std::endl;
	file << "                                              .         ;      " << std::endl;
	file << "                 .              .              ;%     ;;       " << std::endl;
	file << "                   ,           ,                :;%  %;        " << std::endl;
	file << "                    :         ;                   :;%;'     ., " << std::endl;
	file << "           ,.        %;     %;            ;        %;'    ,;   " << std::endl;
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl;
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl;
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl;
	file << "                `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl;
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl;
	file << "                    `:%;.  :;bd%;          %;@%;'              " << std::endl;
	file << "                      `@%:.  :;%.         ;@@%;'               " << std::endl;
	file << "                        `@%.  `;@%.      ;@@%;                 " << std::endl;
	file << "                          `@%%. `@%%    ;@@%;                  " << std::endl;
	file << "                            ;@%. :@%%  %@@%;                   " << std::endl;
	file << "                              %@bd%%%bd%%:;                    " << std::endl;
	file << "                                #@%%%%%:;;                     " << std::endl;
	file << "                                %@@%%%::;                      " << std::endl;
	file << "                                %@@@%(o);  . '                 " << std::endl;
	file << "                                %@@@o%;:(.,'                   " << std::endl;
	file << "                            `.. %@@@o%::;                      " << std::endl;
	file << "                               `)@@@o%::;                      " << std::endl;
	file << "                                %@@(o)::;                      " << std::endl;
	file << "                               .%@@@@%::;                      " << std::endl;
	file << "                               ;%@@@@%::;.                     " << std::endl;
	file << "                              ;%@@@@%%:;;;.                    " << std::endl;
	file << "                          ...;%@@@@@%%:;;;;,..                 " << std::endl;
	file.close();
}