#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double number, power;
	cout<<"Enter a number of which power you want: ";
	cin>>number;
	cout<<endl;
	cout<<"Now Enter the power of number: ";
	cin>>power;
	cout<<endl;
	cout<<"The power of "<<number<<" is "<<pow(number,power)<<endl;
	return 0;
}