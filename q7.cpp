#include<iostream>
using namespace std;
class book {
private:
	int isbn;
	char name[10];
	char author[10];
	int price;
public:
	//constructor
	book() {
		cout << "enter isbn";
		cin >> isbn;
		cin.ignore();
		cout << "enter book name";
		cin.getline(name, 10);
		cout << "enter author name";
		cin.getline(author, 10);
		cout << "enter price";
		cin >> price;
	}
	void display() {
		cout << isbn;
		cout << name;
		cout << author;
		cout << price;

	}
	//destructor
	~book() {
		cout << "destructor was called";

	}
};
int main() {
	book b1;
	b1.display();
	system("pause");
}