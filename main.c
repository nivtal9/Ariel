// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdio.h"
#include "myBank.h"
bool BankIsOpen = true;

int main(){
	char Action;
	while (BankIsOpen == true) {
		printf("Transaction type?\n");
		scanf(" %c", &Action);
		switch (Action)
		{
		case 'O': {
			double money;
			printf("Initial deposit?:\n");
			if (scanf(" %lf", &money) == 1) {
				if(money>=0){
				NewAccount(money);
				}else{
					printf("enter a positive amount\n");
				}
			}
			else
			{
				printf("not a valid number, Please try again\n");
			}
			break;
		}
		case 'B': {
			int Account_Id;
			printf("enter account_id\n");
			if (scanf(" %d", &Account_Id) == 1) {
				if ((900 < Account_Id && Account_Id < 951)) {
					CheckBalance(Account_Id);
				}
				else {
					printf("wrong Account_Id.please try again\n");
					break;
				}
			}
			else
			{
				printf("not a valid number/account, Please try again\n");
			}
			break;
		}
		case 'D': {
			int Account_Id; double money;
			printf("enter account id\n");
			if (scanf(" %d", &Account_Id) == 1) {
				if ((900 < Account_Id && Account_Id < 951)) {
					printf("please insert the deposit amount\n");
					if (scanf(" %lf", &money) == 1) {
						if(money>=0){
							Deposit(Account_Id,money);
						}
						else{
							printf("enter a positive amount\n");
						}
					}
				}
				else {
					printf("wrong Account_Id.please try again\n");
					break;
				}
			}
			else {
				printf("not a valid number/account/deposit number, Please try again\n");
			}
			break;
		}
		case 'W': {
			int Account_Id; double money;
			printf("enter account id\n");
			if (scanf(" %d", &Account_Id) == 1) {
				if ((900 < Account_Id && Account_Id < 951)) {
					printf("please insert the withdrawen amount\n");
					if (scanf(" %lf", &money) == 1) {
						if(money>=0){
							Deposit(Account_Id,-1*money);
						}
						else{
							printf("enter a positive amount\n");
						}
					}
				}
				else {
					printf("wrong Account_Id.please try again\n");
					break;
				}
			}
			else {
				printf("not a valid number/account/deposit number, Please try again\n");
			}
			break;
		}
		case 'C': {
			int Account_Id;
			printf("please enter account id\n");
			if (scanf(" %d", &Account_Id) == 1) {
				if ((900 < Account_Id && Account_Id < 951)) {
					CloseAccount(Account_Id);
				}
				else {
					printf("wrong Account_Id.please try again\n");
					break;
				}
			}
			break;
		}
		case 'I': {
			double precent;
			printf("please enter interest rate:\n");
			if (scanf(" %lf", &precent) == 1) {
				if(precent>=0){
					precent = (precent / 100) + 1;
					InterestRate(precent);
				}else{
					printf("wrong Account_Id.please try again\n");
				}
			}
			else {
				printf("invalid precent. please try again\n");
			}
			break;
		}
		case 'P': {
			BankAccountsStatus();
			break;
		}
		case 'E': {
			ExitBank();
			BankIsOpen=false;
			break;
		}
		default: {
			printf("invalid Action insert. Try again please\n");
		}
		}
		if (BankIsOpen == false) {
			printf("Bank is closed.\n");
		}
	}
}
