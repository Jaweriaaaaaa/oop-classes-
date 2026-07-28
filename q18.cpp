#include<iostream>
#include<cstring>
#include <cstdlib>  
using namespace std;
class book {
private:
	int id;
	char name[10];
public:
	book(int i = 0, const char n[]) {
		id = i;
		strcpy(name, n);


	}
	//copy constructor
	book(const book& obj) {
		id = obj.id;
		strcpy(name, obj.name);

	}
	void display() {
		cout << id;
		cout << name;

	}
};
//pass by value
void showbook(book b) {
	b.display();
}
//return by value
book createbook() {
	book b1(101, "oop");
	return b1;

}
int main() {
	book b1(101,"programming");
	//pass by value
	showbook(b1);
	//return by value

	book b2 = createbook();
	b2.display();

	system("pause");

}