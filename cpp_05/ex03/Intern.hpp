/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 06:04:44 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 22:13:47 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( const Intern & src );
		~Intern();
		AForm	*makeForm(std::string const &formName, std::string const &target); 
		Intern &operator=(Intern const & rhs);
		typedef AForm *(Intern::*formFunction)(std::string const &target);
		AForm				*makeRobotomy(std::string const &target);
		AForm				*makePresidential(std::string const &target);
		AForm				*makeShrubbery(std::string const &target);
		typedef struct s_form
		{
			formFunction	form;
			std::string		str;
		}t_form;
		class InvalidFormName : public std::exception
		{
			public :
				const char* what() const throw();
		};
	private:
	
};

#endif