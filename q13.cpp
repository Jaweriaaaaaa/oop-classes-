#include<iostream>
using namespace std;
class book {
	int id;
	char name[10];
	int price;
public:
	void input() {
		cout << "enter id";
		cin >> id;
		cin.ignore();
		cout << "enter name";
		cin.getline(name, 10);
		cout << "enter price";
		cin >> price;

	}
	void display() {
		cout << id;
		cout << name;
		cout << price;

	}
};
int main() {
	int n;
	cout << "enter n";
	cin >> n;
	book* ptr;
	ptr = new book[n];
	for (int i = 0; i < n; i++) {
		cout << i + 1;
		ptr[i].input();//pointer 

	}
	for (int i = 0; i < n; i++) {
		ptr[i].display();

	}
	system("pause");
}