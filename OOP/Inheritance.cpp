#include<iostream>
using namespace std;
//base class(PARENT)
class Person{
	public:
		string name;
		int age;
		Person(){
			cout<<"Parent Constructor..\n";
		}
	};
	//derived class(CHILD)
	class Student : public Person{
		public:
			int rollno;
			Student(){
				cout<<"Child Constructor..\n";
			}
			void getInfo(){
				cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll no. : "<<rollno<<endl;
			}
	};
int main(){
	Student s1;
	s1.name = "Easha";
	s1.age = 20;
	s1.rollno = 1234;
	s1.getInfo();
}