#include<iostream>
#include<cstring>
using namespace std;

class student {
private:
	int roll;
	char* name;
public:
	//parametrized constructor
	student(int r, const char n[]) {
		roll = r;
		name = new char[strlen(n) + 1];
		strcpy(name, n);

	}
	//deep copy constructor
	student(const student& obj) {
		roll = obj.roll;
		name = new char[strlen(obj.name) + 1];
		strcpy(name, obj.name);

	}
	void display() {
		cout << roll;
		cout << name;

	}
	//destructor
	~student() {
		delete[]name;

	}
};
int main() {
	student s1(101, "ja");
	//deep copy
	student s2 = s1;
	s1.display();
	s2.display();
	system("pause");
}