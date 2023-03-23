/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:08:07 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/23 09:22:30 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void insert(std::deque <int> &dq)
{
    for (size_t i = 0; i < dq.size(); i++)
	{
		int key = dq[i];
		int j = i - 1;
		while (j >= 0 && dq[j] > key)
		{
			dq[j + 1] = dq[j];
			j--;
		}
		dq[j + 1] = key;
	}
    
}

void merge(std::deque <int> &dq, std::deque <int> &left, std::deque <int> &right)
{
    while (left.size() && right.size())
    {
        if (left.front() < right.front())
        {
            dq.push_back(left.front());
            left.pop_front();
        }
        else
        {
            dq.push_back(right.front());
            right.pop_front();
        }
    }
    while(left.size())
    {
        dq.push_back(left.front());
        left.pop_front();
    }
    while(right.size())
    {
        dq.push_back(right.front());
        right.pop_front();
    }
}



void    sorted(std::deque <int> &dq, size_t k)
{
    if (k < 1)
        return sorted(dq, 2);
    if (dq.size() < k)
        return insert(dq);
    size_t size = dq.size();
    std::deque <int> left(dq.begin(), dq.begin() + size/2);
    std::deque <int> right(dq.begin() + size/2 , dq.end());
    dq.clear();
    sorted(left, k);
    sorted(right, k);
    merge(dq,left,right);
}




void insert(std::list <int> &ls)
{
    for (std::list <int>::iterator it = next(ls.begin()); it != ls.end(); ++it)
	{
		int key = *it;
		std::list <int>::iterator j = prev(it);
		std::list <int>::iterator i = it;
		while (i != ls.begin() && *j > key)
		{
			*i = *j;
			--j;
			--i;
		}
		*i = key;
	}
    
}


void merge(std::list <int> &dq, std::list <int> &left, std::list <int> &right)
{
    while (left.size() && right.size())
    {
        if (left.front() < right.front())
        {
            dq.push_back(left.front());
            left.pop_front();
        }
        else
        {
            dq.push_back(right.front());
            right.pop_front();
        }
    }
    while(left.size())
    {
        dq.push_back(left.front());
        left.pop_front();
    }
    while(right.size())
    {
        dq.push_back(right.front());
        right.pop_front();
    }
}



void    sorted(std::list <int> &dq, size_t k)
{
    if (k < 1)
        return sorted(dq, 2);
    if (dq.size() <= k)
        return insert(dq);
    size_t size = dq.size();
    std::list <int> left;
    std::list <int> right;
    
    while (dq.size() > size / 2)
    {
        left.push_back(dq.front());
        dq.pop_front();
    }
    while (dq.size())
    {
        right.push_back(dq.front());
        dq.pop_front();
    }
    sorted(left, k);
    sorted(right, k);
    merge(dq,left,right);
}



