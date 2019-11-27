#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define last 950
#define first 901
#define row 2
#define column 50
#define bank_active 0
#define bank_balance 1

void Deposit(int Account_Id,double money);
void NewAccount(double money);
void CheckBalance(int Account_Id);
void CloseAccount(int Account_Id);
void InterestRate(double precent);
void BankAccountsStatus();
void ExitBank();
