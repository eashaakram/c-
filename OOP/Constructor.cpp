#include<iostream>
using namespace std;
class Teacher{
	private:
		double salary;
	public:
	//Constructor
	Teacher(){
//		cout<<"This is a constructor\n";
	dept = "SE";
	}
		string name, dept, subj;
		void changeDept(string newDept){
			dept = newDept;
		}
		void setSalary(double s){
			salary = s;
		}
		double getSalary(){
			return salary;
		}
};
int main(){
	Teacher t1;//constructor call
	t1.name = "Easha";
	t1.subj = "C++";
	t1.setSalary(2500);
	cout<<t1.name<<endl;
	cout<<t1.dept<<endl;//we will not have to set name of dept again and again bcz it is declared in constructor
	cout<<t1.getSalary()<<endl;
	return 0;
}
	
	

