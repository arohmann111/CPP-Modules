#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(void)
{
	this->_amount = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount > withdrawal)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

		return (true);
	}
	std::cout << "withdrawal:" << "refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t	rawtime;
	std::tm*	timeinfo;
	char		buffer[16];

	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "] ";
}


Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}