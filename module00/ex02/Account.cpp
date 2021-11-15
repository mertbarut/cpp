/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:57:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/15 18:12:41 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();

	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "created" << std::endl;
	
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	Account::_displayTimestamp();

	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) { return (Account::_nbAccounts); }
int	Account::getTotalAmount( void ) { return (Account::_totalAmount); }
int	Account::getNbDeposits( void ) { return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (Account::_totalNbWithdrawals); }

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();

	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";";
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	t;
	std::tm		*now;

	t = std::time(0);
	now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900) << (now->tm_mon + 1) << (now->tm_mday) << "_";
	if (now->tm_hour > 9)
		std::cout << (now->tm_hour);
	else
		std::cout << "0" << (now->tm_hour);
	if (now->tm_min > 9)
		std::cout << (now->tm_min);
	else
		std::cout << "0" << (now->tm_min);
	if (now->tm_sec > 9)
		std::cout << (now->tm_sec);
	else
		std::cout << "0" << (now->tm_sec);
	std::cout << "] ";
}

void	Account::makeDeposit( int deposit )
{
	int d;
	int	flag_refused = 0;

	Account::_displayTimestamp();

	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "deposit:";
	if (deposit < 0)
	{
		flag_refused = 1;
		std::cout << "refused;";
	}
	d = deposit;
	while (d)
	{
		if (d + _amount < 0)
		{
			flag_refused = 1;
			std::cout << "refused;";
			break ;
		}
		d--;
	}
	if (!flag_refused)
		std::cout << deposit << ";";
	Account::_amount += deposit;
	Account::_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_deposits:" << Account::_nbDeposits << ";" << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int flag_refused = 0;

	Account::_displayTimestamp();

	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal <= 0)
	{
		flag_refused = 1;
		std::cout << "refused" << std::endl;
		return (false);
	}
	if (withdrawal > Account::_amount)
	{
		flag_refused = 1;
		std::cout << "refused" << std::endl;
		return (false);
	}
	if (!flag_refused)
		std::cout << withdrawal << ";";
	Account::_amount -= withdrawal;
	Account::_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_withdrawals:" << Account::_nbWithdrawals << ";" << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (Account::_amount);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();

	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawals:" << Account::_nbWithdrawals << ";";
	std::cout << std::endl;
}
