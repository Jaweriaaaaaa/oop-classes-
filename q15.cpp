#include<iostream>
using namespace std;
class book {
private:
	int id;
	char bname[10];
	int price;
public:
	book(int idb,const char name[],int p) {
		id = idb;
		int i = 0;
		while (name[i] != '\0') {
			bname[i] = name[i];
			i++;

		}
		bname[i] = '\0';
		price = p;

	}
	void display()const {
		cout << id;
		cout << bname;
		cout << price;
	}
};
int main() {
	const book b1(101, "OOP", 200);
	b1.display();
	system("pause");

}