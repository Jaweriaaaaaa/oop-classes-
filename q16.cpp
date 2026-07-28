#include <iostream>
using namespace std;

class Employee
{
private:
    const int employeeID;
    char name[30];
    float salary;

public:
    // Constructor with Initializer List
    Employee(int id, const char n[], float s)
        : employeeID(id)
    {
        int i = 0;

        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }

        name[i] = '\0';

        salary = s;
    }

    void Display() const
    {
        cout << "Employee ID : " << employeeID << endl;
        cout << "Name        : " << name << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main()
{
    Employee e1(101, "Ali", 50000);

    e1.Display();

    system("pause");
 
}