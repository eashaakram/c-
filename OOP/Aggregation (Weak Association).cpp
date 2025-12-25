#include <iostream>
using namespace std;
//Aggregation (Weak Association)
class Student {
public:
    string name;
    Student(string n) { 
    	cout<<"Student Constructor"<<endl;
		name = n;
     }
     ~Student(){
     	cout<<"Student Destructor"<<endl;
     }
};

class Classroom {
public:
    Student* std;    // pointer holds student (not owning strongly)

    Classroom(Student* s) {
    	cout<<"Classroom Constructor"<<endl;
        std = s;
    }
    ~Classroom(){
    	cout<<"Classroom Destructor"<<endl;
    }

    void show() {
        cout << "Class has student: " << std->name<<endl;
    }
};

int main() {
    Student s1("Ayesha");     // Student exists independently
    Classroom c1(&s1);        // Aggregation relation

    c1.show();
}
