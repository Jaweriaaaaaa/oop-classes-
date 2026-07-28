#include<iostream>
using namespace std;
class employee {
private:
	int id;
	char name[10];
	int salary;
public:
	//constructor with default argumnts
	employee(int i = 0, const char n[] = "unknown", int s = 0) {
		id = i;
		int j = 0;
		while (n[j] != '/0') {
			name[j] = n[j];
			j++;
		}
		name[j] = '/0';
		salary = s;
	}
	void display() {
		cout << id;
		cout << name;
		cout << salary;
	}
};
int main() {
	employee e1;
	employee e2(11, "Ali", 200);
	e1.display();
	e2.display();
	system("pause");
}