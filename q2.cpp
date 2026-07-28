#include<iostream>
using namespace std;
class time {
private:
	int hours;
	int min;
	int sec;
public:
	void input_time() {
		cout << "enter hous";
		cin >> hours;
		cout << "enter min";
		cin >> min;
		cout << "enter sec";
		cin >> sec;
	}
	bool isvalid(){

		if (hours > 23 || hours < 0 && min>60 && sec > 60) {
			return false;
		}
		else {
			return true;
		}

	}
	void display_time() {
		if (isvalid() == true) {


			cout << hours;
			cout << min;
			cout << sec;
		}
		else {
			cout << "invalid input";
		}
	}

};
int main() {
	time t1;
	t1.input_time();
	t1.display_time();
	return 0;


}