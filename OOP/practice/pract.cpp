#include<iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

protected:
    string address;

public:
    void setData(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

// Derived class
class Employee : public Person {
public:
    double salary;


  Employee(string n, int a, string addr, double s) {
        // setData() is inherited, so we can call it
        setData();
        salary = s;
         showData();
         cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("Eesha", 21, "Lahore", 85000);
    return 0;
}
