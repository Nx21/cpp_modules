/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:23:30 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:49:05 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:

};

#endif 