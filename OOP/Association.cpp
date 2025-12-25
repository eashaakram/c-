#include <iostream>
using namespace std;
//Association
class Teacher {
public:
    string name;
    Teacher(string n) { name = n; }
};

class Student {
public:
    string name;
    Student(string n) { name = n; }

    void meets(Teacher t) {
        cout << name << " meets " << t.name;
    }
};

int main() {
    Teacher t1("Ali");
    Student s1("Sara");

    s1.meets(t1);   // Association relation
}
