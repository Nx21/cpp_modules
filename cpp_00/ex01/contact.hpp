/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:58:25 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 04:49:10 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "utils.hpp"
#ifndef CONRACT_HPP
#define CONRACT_HPP
class Contact
{
	public :
		Contact();
		~Contact();
		Contact(const Contact &contact);
		void		set_contact();
		void		print_contact();
		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_number();
		std::string	get_darkest_secret();
		Contact	&operator=(const Contact &c1);
		
	private:
		void		set_firstname();
		void		set_lastname();
		void		set_nickname();
		void		set_number();
		void		set_darkest_secret();
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	number;
		std::string	darkest_secret;
};
#endif