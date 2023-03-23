/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:17:26 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/23 09:26:20 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void printarr(std::deque <int> &dq, std::string const &s)
{
    std::cout << s ;
    for (size_t i = 0; i < dq.size(); i++)
    {
        if (i > 3 && dq.size() > 5)
        {
            std::cout << "  [...]";
            break;
        }
        std::cout << std::setw(6) << dq[i];
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    std::list <int> lt;
    std::deque <int> dq;
    
    if (argc < 2)
        return 0;
    for (int i = 1; i < argc; i++)
    {
        std::string tmp(argv[i]);
        if (tmp.empty() || tmp.find_first_not_of("0123456789") != tmp.npos)
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        int num = atoi(tmp.c_str());
        lt.push_back(num);
        dq.push_back(num);
    }
    printarr(dq, "Befor:\t");

    clock_t dq_start = clock();
    sorted(dq, 100);
    clock_t dq_end = clock();
    
    clock_t lst_start = clock();
    sorted(lt, 100);
    clock_t lst_end = clock();

    printarr(dq, "After:\t");
    std::cout << "Time to process a range of " << dq.size() << " elements with std::deque : " <<  (double)(dq_end - dq_start) * 1000/CLOCKS_PER_SEC << " ms"<< std::endl;
    std::cout << "Time to process a range of " << dq.size() << " elements with std::list : " <<  (double)(lst_end - lst_start) * 1000/CLOCKS_PER_SEC << " ms" << std::endl;
}
