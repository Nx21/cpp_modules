/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:51:03 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 03:31:02 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
   { 
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		delete i;
		delete j;
	}
	std::cout << std::endl << std::endl;
	{
		Dog baseDog;
		{
			Dog tmpDog;
			tmpDog = baseDog;
		}
	}
		std::cout << std::endl << std::endl;
	while(1);
	// {	
	// 	Cat baseCat;
	// 	{
	// 		Cat tmpCat = baseCat;
	// 	}
	// }
}