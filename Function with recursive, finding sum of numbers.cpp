#include<iostream>
using namespace std;
int sum(int);
int main(){
	int limit;
	cout<<"Enter limit: ";
	cin>>limit;
	sum(limit);
	cout<<"The total sum is "<<sum(limit)<<endl;
}
int sum(int l){
if(l==1)
return 1;
	return l+sum(l-1); 
}