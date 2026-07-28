#include<iostream>
using namespace std;
class bank {
private:
	int number;
	char name[10];
	int balance;
public:
	void create_account() {
		cout << "enter number";
		cin >> number;
		cin.ignore();
		cout << "enter name";
		cin.getline(name, 10);
		cout << "enter balance";
		cin >> balance;

	}
	void deposit() {
		int amount;
		cout << "enter amount";
		cin >> amount;
		if (amount > 0) {
			balance += amount;
		}
	}
	void withdraw() {
		int amount;
		cout << "enter amount";
		cin >> amount;
		if (amount > balance) {
			cout << "insufficient balance";
		}
		else {
			balance -= amount;
		}

	}
	void display_result() {
		cout << balance;
	}
};

	int main() {
		bank b1;
		b1.create_account();
		int choice;
		cout << "enter choice";
		cin >> choice;
		do{
		
			cout <<"2-deposit";
			cout << "3-withdraw";
			cout << "4-display_result";
			cout << "enter choice";
			cin >> choice;
		} while (choice != 5);
		switch (choice) {
		case2:
			b1.deposit();
			break;
		case3:
			b1.withdraw();
			break;
		case4:
			b1.display_result();
			break;
		default:
			cout << "invalid input";
		}
		system("pause");



}