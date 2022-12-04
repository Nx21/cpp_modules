/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 03:33:36 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:49:35 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:

};
#endif