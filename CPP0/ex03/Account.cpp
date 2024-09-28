#include "Account.hpp"
#include <string>
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inital_deposit)
{
}
Account::~Account(void){}

int	Account::getNbAccounts( void ){return _nbAccounts;}
int	Account::getTotalAmount( void ){return _totalAmount;}
int	Account::getNbDeposits( void ){return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ){return _totalNbWithdrawals;}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal){
	return (_amount - withdrawal);
}

int		Account::checkAmount( void ) const{
	return(_amount);
}

void	Account::displayStatus( void ) const{

}

void	Account::_displayTimestamp( void ){


}

void	Account::displayAccountsInfos( void ){
	std::cout << getNbAccounts << "|" << getNbDeposits << "|" << getNbWithdrawals << "|" << getTotalAmount << std::endl;
}

