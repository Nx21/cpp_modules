/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:21:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 06:02:03 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
        ScavTrap    a("heroA");
        ScavTrap    b("heroB");

        a.attack("heroB");
        b.takeDamage(50);
        b.beRepaired(50);
        b.attack("heroA");
        a.takeDamage(110);
        a.attack("b");
        a.guardGate();
        b.guardGate();
}