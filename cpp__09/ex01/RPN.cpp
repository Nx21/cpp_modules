/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:03:00 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/21 16:33:32 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void rpn(std::string &str)
{
	std::stack <long long> q;
	std::string operation = "+-*/";
	int tmp1,tmp2;
	
	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		else if (isdigit(str[i]))
			q.push(str[i] - '0');
		else if (operation.find(str[i]) != operation.npos)
		{
			if (q.size() < 2)
			{
				std::cout << "Error" << std::endl;
				return;
			}
			tmp2 = q.top();
			q.pop();
			tmp1 = q.top();
			q.pop();
			switch (str[i])
			{
				case '+':
					q.push(tmp1 + tmp2);
					break;
				case '*':
					q.push(tmp1 * tmp2);
					break;
				case '/':
					if(!tmp2)
					{
						std::cout << "Error" << std::endl;
						return;
					}
					q.push(tmp1 / tmp2);
					break;
				case '-':
					q.push(tmp1 - tmp2);
					break;
			}
		}
		else
		{
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if(q.size() != 1)
	{
		std::cout << "Error" << std::endl;
		return;
	}
	std::cout << q.top() << std::endl;
}