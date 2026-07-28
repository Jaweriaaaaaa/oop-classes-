#include<iostream>
using namespace std;
class student {
private:
	int roll;
	char name[10];
public:
	static int total_students;
	student() {
		total_students++;

	}
	void input() {
		cout << "enter roll";
		cin >> roll;
		cin.ignore();
		cout << "enter name";
		cin.getline(name, 10);
	}

	void display() {
		cout << roll;
		cout << name;
	}
	static  void showtotalstudents() { 
		cout<<total_students;

	}
};
//define static member
int student::total_students = 0;
int main() {
	student s1;
	student s2;
	s1.input();
	s1.display();
	s2.input();
	s2.display();
	student::showtotalstudents();
	system("pause");
}