#include<iostream>
using namespace std;
void menuPage() {
	cout << "**************Menu**************" << endl;
	cout << "1. See your current money in the bank" << endl;
	cout << "2. Deposit money in your bank accout" << endl;
	cout << "3. Withdraw money from your bank account" << endl;
	cout << "4. Invest money with high risk(7% return)" << endl;
	cout << "5. Invest money with moderate risk(5% return)" << endl;
	cout << "6. Invest money with low risk(3% return) " << endl;
	cout << "7. Borrow money with 5% interest rate " << endl;
	cout << "8. EXIT " << endl;
	cout << "**************Menu**************" << endl;


}
int main() {
	int option;
	double balance = 0;
	do {
		menuPage();
		cout << "option: ";
		cin >> option;
		system("cls");
		switch (option) {

		case 1:  cout << "Balance is " << balance << " euro " << endl;break;
		case 2: { cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
		}
			  break;
		case 3: {cout << "Withdraw amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Not enough money" << endl;
		}
			  break;
		case 4: {cout << "Your amount of money raised by 7%, please check your balance again " << endl;
			double investmentAgressive = 0.07;
			balance = (balance * investmentAgressive) + balance;
		}
			  break;

		case 5: {cout << "Your amount of money raised by 5%, please check your balance again" << endl;
			double investmentModerate = 0.05;
			balance = (balance * investmentModerate) + balance;}

			  break;
		case 6: {cout << "Your amount of money raised by 3%, please check your balance again" << endl;
			double investmentLowRisk = 0.03;
			balance = (balance * investmentLowRisk) + balance;
		}
			  break;

		case 7: {cout << "How much money do you want to borrow: " << endl;
			double borrowMOney;
			cin >> borrowMOney;
			balance = balance - (borrowMOney + borrowMOney * 0.05);
		}
			  break;
		}



	} while (option != 8);
	return 0;
	system("pause>0");

}