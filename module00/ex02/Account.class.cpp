/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/30 14:27:56 by bpeeters       #+#    #+#                */
/*   Updated: 2020/03/31 18:19:50 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.class.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int		Account::getNbAccounts()
{
	return	_nbAccounts;
}
int		Account::getTotalAmount()
{
	return	_totalAmount;
}
int		Account::getNbDeposits()
{
	return	_totalNbDeposits;
}
int		Account::getNbWithdrawals()
{
	return	_totalNbWithdrawals;
}
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';';
	std::cout << "total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ';';
	std::cout << "withdrawals:" << _totalNbWithdrawals << '\n';
}

Account::Account(int initial_deposit)
	: _accountIndex(getNbAccounts()),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_displayTimestamp();
	++_nbAccounts;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	--_nbAccounts;
	std::cout << "amount:" << _amount << ';';
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	std::cout << "closed\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	std::cout << "deposit:" << deposit << ';';
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_deposits:" << ++_nbDeposits << '\n';
	++_totalNbDeposits;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	if (_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused\n";
		return false;
	}
	std::cout << "withdrawal:" << withdrawal << ';';
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_withdrawals:" << ++_nbWithdrawals << '\n';
	++_totalNbWithdrawals;
	return true;
}

int		Account::checkAmount() const
{
	return	Account::_amount;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << '\n';
}

void	Account::_displayTimestamp()
{
	time_t		timep(std::time(0));
	struct tm	*localTime(localtime(&timep));
	std::cout << '[';
	std::cout << localTime->tm_year + 1900;
	if (localTime->tm_mon + 1 < 10)
		std::cout << '0';
	std::cout << localTime->tm_mon + 1;
	if (localTime->tm_mday < 10)
		std::cout << '0';
	std::cout << localTime->tm_mday;
	std::cout << '_';
	if (localTime->tm_hour < 10)
		std::cout << '0';
	std::cout << localTime->tm_hour;
	if (localTime->tm_min < 10)
		std::cout << '0';
	std::cout << localTime->tm_min;
	if (localTime->tm_sec < 10)
		std::cout << '0';
	std::cout << localTime->tm_sec;
	std::cout << "] ";
}

Account::Account()
	: _accountIndex(getNbAccounts()),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_displayTimestamp();
	++_nbAccounts;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ';';
	std::cout << "created\n";
}
