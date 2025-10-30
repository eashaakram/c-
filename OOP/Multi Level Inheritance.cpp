#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
};
class Student : public Person{
	public:
		int rollno;
};
class GradStudent : public Student{
	public:
	string researchArea;
};
int main(){
	GradStudent S1;
	S1.name = "Tony";
	S1.researchArea = "Quantum Physics";
	cout<<"Name: "<<S1.name<<endl;
	cout<<"Research: "<<S1.researchArea<<endl;
}