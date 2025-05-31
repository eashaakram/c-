#include<iostream>
using namespace std;
int main(){
	int limit;
	cout<<"Enter number of Employees: ";
	cin>>limit;
	int hours[limit];
	for(int i=0; i<limit; i++){
		cout<<"Enter number of hours worked by employee "<<i+1<<":";
		cin>>hours[i];
	}
	return 0;
}