/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:21:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/28 22:12:33 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    FragTrap    a("heroA");
    FragTrap    b("heroB");
    ScavTrap    c("heroC");

    a.attack("heroB");
    b.takeDamage(50);
    b.beRepaired(50);
    c.attack("heroA");
    b.attack("heroA");
    a.takeDamage(110);
    a.attack("b");
    a.highFivesGuys();
    b.highFivesGuys();
}