#include<iostream>
using namespace std;
int factorial(int);
int main(){
	int num;
	cout<<"Enter any number of which factorial u want: ";
	cin>>num;
	if(num<0){
		cout<<"Invalid, Enter positive number: ";
		cin>>num;
	}
	cout<<factorial(num)<<" is the factorial of "<<num<<endl;
}
int factorial(int n){
	if(n==0)
	return 1;//the factorial of zero is 1;
	return n*factorial(n-1);
}
