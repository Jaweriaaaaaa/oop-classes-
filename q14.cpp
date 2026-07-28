#include<iostream>
using namespace std;
class student {
private:
	int roll;
	int marks;
public:
	student& set_roll(int r) {
		this->roll = r;
		return*this;
	}
	student&  get_marks(int m) {
		this->marks = m;
		return*this;
	}
	void display() {
		cout << roll;
		cout << marks;

	}
};
int main() {
	student s1;
	s1.set_roll(101).get_marks(151);
	s1.display();
	system("pause");

}