/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:39:36 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/03 12:00:12 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit),
_nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    _nbAccounts -= 1;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}



void	Account::_displayTimestamp( void )
{
    time_t currentTime = time(0);
    struct tm* localTime = localtime(&currentTime);

    // Formata a data e hora no formato desejado [YYYYMMDD_HHMMSS]
    std::cout << "[" << (localTime->tm_year + 1900); // Ano
    std::cout << std::setfill('0') << std::setw(2) << (localTime->tm_mon + 1); // Mês
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_mday; // Dia
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_hour; // Hora
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_min; // Minuto
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_sec; // Segundo
    std::cout << "]";
}

void	Account::makeDeposit( int deposit )
{
    _nbDeposits += 1;
    _totalNbDeposits += _nbDeposits;
    _totalAmount += deposit;
    
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }

    _nbWithdrawals += 1;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += _nbWithdrawals;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount( void ) const
{
    return _totalAmount;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();

    std::cout << " accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();

    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Comando para testar a diferença entre os 2 ficheiros log!
//diff <(cut -c 18- x.log) <(cut -c 18- 19920104_091532.log)