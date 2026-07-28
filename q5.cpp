#include<iostream>
#include<cstring>
using namespace std;
class laptop {
private:
	char brand[10];
	int ram;
	int price;
public:
	//constructor
	laptop() {
		strcpy(brand, "HP");
		ram = 8;
		price = 2000;
	}
	//premetrixed constructor
	laptop(const char b[], int r, int p) {
		strcpy(brand, b);
		ram = r;
		price = p;

	}
	void display() {
		cout << brand;
		cout << ram;
		cout << price;
	}
};
int main() {
	laptop l1;
	laptop l2("dell", 16, 200);
	l1.display();
	l2.display();
	system("pause");
}