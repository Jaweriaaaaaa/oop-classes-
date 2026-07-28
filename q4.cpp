#include<iostream>
using namespace std;
class book {
private:
	int id;
	int price;
	char name[20];
public:
	book() {
		cout << "enter id";
		cin >> id;
		cout << "enter price";
		cin >> price;
		cin.ignore();
		cout << "enter name";
		cin.getline(name, 20);
	}
	void display() {
		cout << id;
		cout << price;
		cout << name;
	}
};
int main() {
	book b1;
	b1.display();
	system("pause");
}