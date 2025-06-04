#include<iostream>
using namespace std;
int fib(int);
int main(){
	int n;
	cout<<"Enter a limit(up to around 30): ";
	cin>>n;
	while(n<=0||n>30){
		cout<<"Invalid number!\nEnter positive number(1 to 30): ";
		cin>>n;
	}
	int i=0;
	while(true){
		int f=fib(i);
		if(i>=n){
			break;
		}
		cout<<f<<" ";
		i++;	
	}
	cout<<endl;
}
int fib(int num){
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	return fib(num-1)+fib(num-2);
}







