/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:51:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/08 22:11:05 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(2);
    mstack.push(536);
    mstack.push(23);
    mstack.push(0);
    mstack.push(3588);
    mstack.push(35);
    mstack.push(457);
    mstack.push(4);
    MutantStack<int> mstack1 = mstack;
    MutantStack<int>::iterator it = mstack1.begin();
    MutantStack<int>::iterator ite = mstack1.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}