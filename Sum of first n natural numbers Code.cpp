#include<iostream>
using namespace std;
int main(){
	cout<<"Calculate the sum of first n natural numbers"<<endl;
	int limit, sum=0, a=1;
	cout<<"Enter your limit: ";
	cin>>limit;
	while(a<=limit){
		cout<<"The number is "<<a<<endl;
		sum+=a;
		cout<<"The sum at that number is "<<sum<<endl;
		a++;
	}
	cout<<"So, \n The total sum is "<<sum<<endl;
	return 0;
}