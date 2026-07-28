#include<iostream>
using namespace std;
class employee {
private:
	int id;
	char name[10];
	int salary;
public:
	void input() {
		cout << "enter id";
		cin >> id;
		cin.ignore();
		cout << "enter name";
		cin.getline(name, 10);
		cout << "enter salary";
		cin >> salary;

	}
	void display() {
		cout << id;
		cout << name;
		cout << salary;

	}

};
int main() {
	employee* ptr;
	ptr = new employee;
	ptr->input();
	ptr->display();
	system("pause");
}