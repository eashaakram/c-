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