#include<iostream>
using namespace std;
int main(){
	int a=0, b=1;
	int limit, next;
	cout<<"Enter Your Limit: ";
	cin>>limit;
	while(a<=limit){
		cout<<" "<<a;
		next=a+b;
		a=b;
		b=next;
	}
	return 0;
}