#include<iostream>
using namespace std;
class test {
private:
	int id;
public:
	//parametrized constructor
	test(int i) {
		id = i;

	}
	~test() {
		cout << "destructor called for object" << id;
	}
};
test global_obj(1);
void demo() {
	static test obj(2);
	test localobj(3);
}
int main() {
	cout << "in main";
	demo();
	cout << "back in main";
	system("pause");
}