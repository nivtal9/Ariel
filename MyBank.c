#include "MyBank.h"
double BankAccount[row][column] = { {0}};
void NewAccount(double money) {
	for (int i = 0; i < column; i++) {
		if (BankAccount[bank_active][i] == 0) {
			BankAccount[bank_active][i] = 1;
			BankAccount[bank_balance][i] = money;
			printf("Your new Account has been created, id of account:%d, balance is:%.2lf\n", first + i, BankAccount[bank_balance][i]);
			break;
		}
		if(i==49) {
			printf("The bank is full, Please delete Accounts.\n");
		}
	}
}
void CheckBalance(int Account_Id) {
	if (BankAccount[bank_active][Account_Id - first] == 1) {
		printf("Account balance is: %.2lf\n", BankAccount[bank_balance][Account_Id - first]);
		}
	else {
		printf("Account is currently closed and has 0 balance.\n");
	}
}
void Deposit(int Account_Id,double money) {
	if (money + BankAccount[bank_balance][Account_Id - first] >= 0) {
		double temp = 0;
		temp = BankAccount[bank_balance][Account_Id - first] + money;
		BankAccount[bank_balance][Account_Id - first] = temp;
		printf("your recent balance is:%.2lf\n", BankAccount[bank_balance][Account_Id - first]);
	}
	else {
		printf("insufficient funds.please try again\n");
	}
}
void CloseAccount(int Account_Id) {
	if (BankAccount[bank_active][Account_Id - first] == 1) {
		BankAccount[bank_active][Account_Id - first] = 0;
		BankAccount[bank_balance][Account_Id - first] = 0;
	}
	else {
		printf("the account id that you enterd is already closed.\n");
	}
}
void InterestRate(double precent) {
	for (int i = 0; i < row; i++) {
		if (BankAccount[bank_active][i] == 1) {
			double temp=0;
			temp = BankAccount[bank_balance][i];
			temp = temp * precent;
			BankAccount[bank_balance][i] = temp;
		}
	}
}
void BankAccountsStatus() {
	for (int i = 0; i < row; i++) {
		if (BankAccount[bank_active][i] == 1) {
			printf("account id:%d has a balance of:%.2lf\n",first+i,BankAccount[bank_balance][i]);
		}
	}
}
void ExitBank() {
	for (int i = 0; i < row; i++) {
		if (BankAccount[bank_active][i] == 1) {
			BankAccount[bank_active][i] = 0;
			BankAccount[bank_balance][i] = 0;
		}
	}
}