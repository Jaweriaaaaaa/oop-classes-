#include<iostream>
using namespace std;
class car {
private:
	int id;
	char model[10];
public:
	void input() {
		cout << "enter id";
		cin >> id;
		cin.ignore();
		cout << "enter model";
		cin.getline(model, 10);
	}
	void display() {
		cout << id;
		cout << model;

	}
};
int main() {
	car c1;
	c1.input();
	c1.display();
	//array of objects
	car cars[2];
	for (int i = 0; i < 2; i++) {
		cars[i].input();
	}
	for (int i = 0; i < 2; i++) {
		cars[i].display();
	}
	//pointer to object
	car* ptr = &c1;
	ptr->display();
	//refrence to object
	car& ref = c1;
	ref.display();
	system("pause");
}