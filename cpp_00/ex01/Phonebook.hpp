/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:18:56 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/12 12:54:32 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     size;
        int     idx;
    public :
        PhoneBook();
        ~PhoneBook();
        PhoneBook(const PhoneBook &phonebook);
        void    set_contact();
        void    print_contact();
        Contact	&operator=(const PhoneBook& c1);
};
