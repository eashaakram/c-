#include<iostream>
using namespace std;
int sum(int);
int main(){
	cout<<"Calculate the sum of first n natural numbers"<<endl;
	int limit;
	cout<<"Enter your limit: ";
	cin>>limit;
	while(limit<0){
		cout<<"Invalid, Enter positive : ";
		cin>>limit;
	}
cout<<"Total is "<<sum(limit);
}
int sum(int s){
if(s==1)
return 1;
	
	return s+sum(s-1);
	}