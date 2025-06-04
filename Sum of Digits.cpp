#include<iostream>
using namespace std;
int sumOfDigits(int);
int main(){
	int n;
	cout<<"SUM OF DIGITS\n";
	cout<<"Enter a number(e.g sample ID): ";
	cin>>n;
	while(n<0){
		cout<<"Invalid number!\nEnter positive number: ";
		cin>>n;
	}
	cout<<"Sum = "<<sumOfDigits(n)<<endl;
}
int sumOfDigits(int num){
	if(num<10){
		return num;
	}
	int sum=0;
	while(num>0){
		sum=sum+num%10;
		num=num/10;
	}
	return sumOfDigits(sum);
}