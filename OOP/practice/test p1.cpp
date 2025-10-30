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
//Another way
// #include<iostream>
// using namespace std;
// class Teacher{
// 	private:
// 		double salary;
// 	public:
// 	int num;
// 	string name, dept, course;
// 	void setvalue(double sal){
// 		salary = sal;
// 	}
// 	double getvalue(){
// 		return salary;
// 	}
// 	void show(int num, string name, string dept, string course, double sal){
// 		cout<<"\tDATA of Teacher#";
// 			cout<<num<<"\nName: "<<name<<"\tDepartment: "<<dept<<"\tCourse: "<<course<<"\tSalary: "<<salary<<endl;
// 	}
// };
// int main(){
// Teacher t1;
// t1.setvalue(50000);
// t1.show(1,"EESHA","SE","OOP",t1.getvalue());
// Teacher t2;
// t2.setvalue(80000);
// t2.show(2,"Nimra","CS","OOP",t2.getvalue());
// Teacher t3;
// t3.setvalue(70000);
// t3.show(3,"Sana","SE","Calc",t3.getvalue());
// }
