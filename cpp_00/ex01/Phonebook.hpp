/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:18:56 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/18 11:13:36 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
class PhoneBook
{
    private:
        Contact contacts[8];
        int     size;
        int     idx;
        void    print_contact(int i);
    public :
        PhoneBook();
        ~PhoneBook();
        PhoneBook(const PhoneBook &phonebook);
        void    set_contact();
        void    print_phonebook();
        void    print_info();
        PhoneBook	&operator=(const PhoneBook& p1);
};
#endif