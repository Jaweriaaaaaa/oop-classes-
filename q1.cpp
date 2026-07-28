#include<iostream>
using namespace std;
class student {
private:
	int roll;
	int age;
	char name[20];
public:
	void input_data() {
		cout << "enter roll";
		cin >> roll;
		cout << "enter age";
		cin >> age;
		cin.ignore();
		cout << "enter name";
		cin.getline(name, 20);
	}
	void display_data() {
		cout << roll;
		cout << age;
		cout << name;

	}
};
int main() {
	student s1;
	s1.input_data();
	s1.display_data();
	system("pause");
}