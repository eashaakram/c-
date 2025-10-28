#include<iostream>
using namespace std;
//base class(PARENT)
class Person{
	public:
		string name;
		int age;
	
		Person(string n, int ag){
			cout<<"Parent Constructor..\n";
			name=n;
			age=ag;
		}
		~Person(){
			cout<<"Parent Destructor..\n";
		}
	};
	//derived class(CHILD)
	class Student : public Person{
		public:
			int rollno;
			Student(string n,int ag,int roll):Person(n,ag){
					cout<<"Child Constructor..\n";
				rollno=roll;	
			}
			~Student(){
				cout<<"Child Destructor..\n";
			
			}
			void getInfo(){
				cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll no. : "<<rollno<<endl;
			}
	};
int main(){
	Student s1("EEsha",20,1234);
	s1.getInfo();
}