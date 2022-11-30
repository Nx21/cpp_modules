/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:21:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 02:36:08 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
int main()
{
    DiamondTrap    a("heroA");
    DiamondTrap    b("heroB");
    DiamondTrap    c("heroC");

    a.info();
    a.takeDamage(50);
    a.beRepaired(50);
    a.takeDamage(110);
    a.info();
    a.highFivesGuys();
    a.guardGate();
    b.info();
    b.highFivesGuys();
    b.guardGate();
    a.whoAmI();
    b.whoAmI();
}