#include<iostream>
using namespace std;
struct employeepay{
	string name;
	int empnum;
	double pay;
	double hrs;
	double grosspay;
};
int main(){
	employeepay e1={"Taha", 369, 18.75};
	employeepay e2={"Ahmed", 370, 17.50};
	
	cout<<"Calculate pay for employee 1\n";
	cout<<"Name: "<<e1.name<<endl;
	cout<<"Number: "<<e1.empnum<<endl;
	cout<<"Pay: "<<e1.pay<<endl;
	cout<<"Enter number of hours worked by employee: ";
	cin>>e1.hrs;
	e1.grosspay= e1.hrs*e1.pay;
	cout<<"Gross-pay: "<<e1.grosspay<<endl;
	
	cout<<"Calculate pay for employee 2\n";
	cout<<"Name: "<<e2.name<<endl;
	cout<<"Number: "<<e2.empnum<<endl;
	cout<<"Pay: "<<e2.pay<<endl;
	cout<<"Enter number of hours worked by employee: ";
	cin>>e2.hrs;
	e2.grosspay=e2.hrs*e2.pay;
	cout<<"Gross-pay: "<<e2.grosspay<<endl;
	
	return 0;
}