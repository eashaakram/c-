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
		Person(string n, int ag){
			name=n;
			age=ag;
		}
	};
	//derived class(CHILD)
	class Student : public Person{
		public:
			int rollno;
			Student(){
				cout<<"Child Constructor..\n";
			
			}
			Student(string n,int ag,int roll):Person(n,ag){
				rollno=roll;	
			}
			void getInfo(){
				cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll no. : "<<rollno<<endl;
			}
	};
int main(){
	Student s1("EEsha",20,1234);
	s1.getInfo();
}