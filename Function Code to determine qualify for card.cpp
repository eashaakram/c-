#include<iostream>
using namespace std;
int qualify(){
	cout<<"The applicant qualifies for the card and that the annual interest rate is 12%."<<endl;
}
int noqualify(){
	cout<<"The applicant does not qualify for the card."<<endl;
}
int main(){
	cout<<"This program will determine if you qualify for our credit card.\n"; 
	double salary;
	int year;
	cout<<"Enter your salary: ";
	cin>>salary;
	cout<<"Enter your years of working: ";
	cin>>year;
	if(salary>=17000 && year>=2)
	qualify();
	else
	noqualify();
}