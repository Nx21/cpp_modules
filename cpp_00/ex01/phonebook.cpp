/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 03:14:09 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 21:40:45 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	idx = 0;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &p1)
{
	this->size = p1.size;
	this->idx = p1.idx;
	for (int i = 0; i < 8; i++)
		this->contacts[i] = p1.contacts[i];
	return (*this);
}

PhoneBook::PhoneBook(const PhoneBook &phonebook)
{
	*this = phonebook; 
}

PhoneBook::~PhoneBook()
{
	
}

void PhoneBook::set_contact()
{
	contacts[idx].set_contact();
	if (size < 8)
		size++;
	idx = (idx + 1) % 8;
}

void PhoneBook::print_contact(int i)
{
	if (i >= size)
		return ;
	std::cout.width(10);
	std::cout  << std::left << i + 1 << "|";
	print_string(contacts[i].get_firstname(), 10);
	std::cout << "|";
	print_string(contacts[i].get_lastname(), 10);
	std::cout << "|";
	print_string(contacts[i].get_nickname(), 10);
	
	std::cout << std::endl;
}

void PhoneBook::print_phonebook()
{
	if (!size)
	{
		std::cout<< "ADD contact first" << std::endl;
		return ;
	}
	std::cout.width(10);
	std::cout << std::left << "index" << "|";
	std::cout.width(10);
	std::cout << std::left << "first name" << "|";
	std::cout.width(10);
	std::cout << std::left << "last name" << "|";
	std::cout.width(10);
	std::cout << std::left << "nickname" << std::endl;
	for (int i = 0; i < size; i++)
		print_contact(i);
	print_info();
}
void PhoneBook::print_info()
{
	std::string  str;

	std::cout << "User index :";
	while (getline(std::cin, str) && !str.empty()\
		&& !isnumber(str) &&\
		str.size() == 1 && str[0] - '0' <= size)
		std::cout << "Try Again !! \nUser: ";
	if(std::cin.fail() || str.empty())
		return ;
	contacts[str[0] - '1'].print_contact();
}

