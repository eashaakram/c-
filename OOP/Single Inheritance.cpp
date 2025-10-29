#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
		//Constructor
		Person(string n, int Age){
			name = n;
			age = Age;
		}
};
//Derived class
class Student : public Person{
	public:
		int rollno;
		//Constructor
		Student(string n, int Age, int rollNo) : Person(n,Age){
			rollno = rollNo;
		}
		void getInfo(){
			cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll no: "<<rollno<<endl;
		}
};
int main(){
	Student s1("Eesha",20,4092);
	s1.getInfo();
	return 0;
}