#include<iostream>
using namespace std;
class Teacher{
	private:
		double salary;
	public:
	int num;
	string name, dept, course;
	Teacher(int nu, string n, string dep, string cour, double sal){
		num = nu;
		name = n;
		dept = dep;
		course = cour;
		salary = sal;
	}
	void show(){
		cout<<"\tDATA of Teacher#";
			cout<<num<<"\nName: "<<name<<"\tDepartment: "<<dept<<"\tCourse: "<<course<<"\tSalary: "<<salary<<endl;
	}
};
int main(){
Teacher t1(1,"EESHA","SE","OOP",50000);
t1.show();
Teacher t2(2,"Nimra","CS","OOP",80000);
t2.show();
Teacher t3(3,"Sana","SE","Calc",70000);
t3.show();
}