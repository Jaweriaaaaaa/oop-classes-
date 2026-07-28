#include<iostream>
#include<string>
using namespace std;
class student {
private:
	int roll;
	char name[10];
public:
	//parametrized constructor
	student(int r, const char n[]) {
		roll = r;
		strcpy(name, n);

	}
	//copy constructor
	student(const student& obj) {
		roll = obj.roll;
		strcpy(name, obj.name);
	}
	void display() {
		cout << roll;
		cout << name;

	}
};
int main() {
	student s1(101, "ali");
	//copy constructor called
	student s2 = s1;
	s1.display();
	s2.display();
	system("pause");
}