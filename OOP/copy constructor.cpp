#include<iostream>
using namespace std;
class Teacher{
	private:
		double salary;
	public:
	string name, dept, subj;
	Teacher(string n,string d,string s,double sal){
		name = n;
		dept = d;
		subj = s;
		salary = sal;
	}
	//copy constructor
	Teacher(Teacher &obj){
		this->name = obj.name;
		this->dept = obj.dept;
		this->subj = obj.subj;
		this->salary = obj.salary;
	}
	void getInfo(){
		cout<<"Name: "<<name<<endl;
		cout<<"Subject: "<<subj<<endl;
		cout<<"Department: "<<dept<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main(){
	Teacher t1("EESHA","SE","OOP",50000);
	Teacher t2(t1);
	t2.getInfo();

}
//#include<iostream>
//using namespace std;
//class Student{
//	public:
//	string name;
//	int id;
//	Student(string n,int Id){
//		name = n;
//		id = Id;
//	}
//	Student(Student &obj){
//		name = obj.name;
//		id = obj.id;
//	}
//	void show(){
//		cout<<"Name: "<<name<<"\nId: "<<id<<endl;
//	}
//};
//int main(){
//	Student S("Eesha", 123);
//	Student S2(S);
//	S2.show();
//}
