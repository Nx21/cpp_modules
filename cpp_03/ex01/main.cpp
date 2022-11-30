/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:21:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 03:03:50 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
        ScavTrap    a("heroA");
        ScavTrap    b("heroB");
        ClapTrap    c("heroC");

        a.info();
        b.info();
        a.attack("heroB");
        b.takeDamage(50);
        b.info();
        b.beRepaired(50);
        b.info();
        c.attack("heroA");
        b.attack("heroA");
        a.takeDamage(110);
        a.attack("b");
        a.info();
        a.guardGate();
        b.guardGate();
        
}