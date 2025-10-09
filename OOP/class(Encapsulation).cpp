#include<iostream>
using namespace std;
//class is like a blueprint 
class Teacher{
	private://access within class
		double salary;
	public://access within or outside class
		string name, dept, subj;
		void changeDept(string newDept){
			dept = newDept;
		}
		//setter -> set private values
		void setSalary(double s){
			salary = s;
		}
		//getter -> get private values
		double getSalary(){
			return salary;
		}
};
int main(){
	//Now make one or more objects by using class blueprint
	Teacher t1;
	t1.name = "Easha";
	t1.dept = "SE";
	t1.subj = "C++";
	t1.setSalary(2500);
	cout<<t1.name<<endl;
	cout<<t1.getSalary()<<endl;
	return 0;
}
	
	

