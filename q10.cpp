#include<iostream>
using namespace std;
class student {
private:
	int roll;
	char name[10];
	float cgpa;
public:
	//default constructor
	student() {
		cout << "constructor is called";
		roll = 101;
		strcpy(name, "ali");
		cgpa = 3.1;


	}
	//parametrized constructor
	student(int r, const char n[], float c) {
		strcpy(name, n);
		roll = r;
		cgpa = c;

	}
	void display() {
		cout << roll;
		cout << name;
		cout << cgpa;

	}

};
int main() {
	student s1;
	s1.display();
	//pointer to object
	student* ptr = &s1;
	ptr->display();
	student s2(1011, "aleem", 3.2);
	s2.display();
	system("pause");

}
