/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:53:17 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 03:02:03 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout <<  "index:" << _accountIndex
        << ";amount:" << _amount 
        << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout <<  "index:" << _accountIndex
        << ";amount:" << _amount 
        << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout <<  "index:" << _accountIndex
        << ";amount:" << _amount 
        << ";deposits:" << _nbDeposits 
        << ";withdrawals:" << _nbWithdrawals
        << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout <<  "index:" << _accountIndex
        << ";p_amount:" << _amount 
        << ";deposit:" << deposit
        << ";amount:" << _amount + deposit
        << ";withdrawals:" << _nbWithdrawals
        << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (_amount >= withdrawal)
    {
        std::cout <<  "index:" << _accountIndex
            << ";p_amount:" << _amount 
            << ";deposit:" << withdrawal
            << ";amount:" << _amount - withdrawal
            << ";withdrawals:" << _nbWithdrawals
            << std::endl;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        return (1);
    }
    else
    {
        std::cout <<  "index:" << _accountIndex
            << ";p_amount:" << _amount
            << ";withdrawal:refused"<< std::endl;
        return (0);
    }
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout <<  "acounts:" << getNbAccounts()
        << ";total:" << getTotalAmount() 
        << ";deposits:" << getNbDeposits() 
        << ";withdrawals:" << getNbWithdrawals() 
        <<  std::endl;
}


void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "["<< (now->tm_year + 1900) 
            << std::setfill('0') << std::setw(2)<< (now->tm_mon + 1)
            << std::setfill('0') << std::setw(2)<<  now->tm_mday << "_"
            << std::setfill('0') << std::setw(2) << now->tm_hour
            << std::setfill('0') << std::setw(2)<< now->tm_min
            << std::setfill('0') << std::setw(2)<< now->tm_sec << "] ";
}