#include<iostream>
using namespace std;
class Employee{
	int id;
	string name;
	double salary;
	public:
	Employee(int Id, string n, double s){
		id = Id;
		name = n;
		salary = s;
	}
	void setSalary(double s){
		salary = s;
	}
	double getSalary(){
		return salary;
	}
	void show(){
		cout<<"Name: "<<name<<"\nId: "<<id<<"\nSalary: "<<salary<<endl;
	}
};
int main(){
	Employee E1(123,"Easha",50000);
	E1.show();
	cout<<"Updated salary\n";
	E1.setSalary(70000);
	E1.show();
}