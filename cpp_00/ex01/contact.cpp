/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 03:14:09 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/12 12:39:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <limits>

Contact::Contact()
{
    firstname = "";
	lastname = "";
	nickname = "";
	number = "";
	darkest_secret = "";
}

void Contact::set_contact()
{
    set_firstname();
    set_lastname();
    set_nickname();
    set_number();
    set_darkest_secret();
}

Contact &Contact::operator=(const Contact& c1)
{
    this->firstname = c1.firstname;
    this->lastname = c1.lastname;
    this->nickname = c1.nickname;
    this->number = c1.number;
    this->darkest_secret = c1.darkest_secret;
    return (*this);
}

Contact::~Contact()
{
    
}

void Contact::set_firstname()
{
    if(std::cin.fail())
        return;
    std::cout << "Firstname : ";
    while(getline(std::cin, firstname) && firstname.empty())
    {
        std::cout << "Try Again !! \nFirstname : ";
    }
}

void Contact::set_lastname()
{
    if(std::cin.fail())
        return;
    std::cout << "Lastname : ";
    while(getline(std::cin, lastname) && lastname.empty())
        std::cout << "Try Again !! \nLastname : ";
        ;
}

void Contact::set_nickname()
{
    if(std::cin.fail())
        return;
    std::cout << "Nickname : ";
    while(getline(std::cin, nickname) && nickname.empty())
        std::cout << "Try Again !! \nNickname : ";
}

void Contact::set_number()
{
    if(std::cin.fail())
        return;
    std::cout << "Phonenumber : ";
    while(getline(std::cin, number ) && number.empty())
        std::cout << "Try Again !! \nPhonenumber : ";
}

void Contact::set_darkest_secret()
{
    if(std::cin.fail())
        return;
    std::cout << "Darkest Secret : ";
    while(getline(std::cin, darkest_secret) && darkest_secret.empty())
        std::cout << "Try Again !! \nDarkest Secret : ";
}


std::string Contact::get_firstname()
{
    return firstname;
}

std::string Contact::get_lastname()
{
    return lastname;
}

std::string Contact::get_nickname()
{
    return nickname;
}

std::string Contact::get_number()
{
    return number;
}

std::string Contact::get_darkest_secret()
{
    return darkest_secret;
}


Contact::Contact(const Contact &c1)
{
    *this = c1;
}
