/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:40:45 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/21 18:06:19 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    BitcoinExchange exchange;
    if (argc != 2)
    {
        std::cerr << "invalid argument" << std::endl;
        return 1;
    }
    std::ifstream datafile;
    datafile.open("data.csv");
    if (!datafile.is_open())
    {
        std::cerr << "failed to open data.csv" << std::endl;
        return 1;
    }
    std::string data;
    std::getline(datafile, data, '\0');
    try
    {
        exchange.get_data(data);
        datafile.close();
        std::ifstream input;
        input.open(std::string(argv[1]));
        if (!input.is_open())
        {
            std::cerr << "failed to open " << argv[1] << std::endl;
            return 1;
        }
        std::string line;
        std::getline(input, line);
        line.erase(remove(line.begin(), line.end(), ' '), line.end());
        if (line != "date|value")
            exchange.getres(line);
        while(std::getline(input, line))
        {
            line.erase(remove(line.begin(), line.end(), ' '), line.end());
            exchange.getres(line);
        }
        input.close();
    }
    catch(const char *msg)
    {
        std::cerr << msg << '\n';
        return 1;
    }
    
}