#include<iostream>
using namespace std;
int showcube(int);
int main(){
	int limit;
	cout<<"Enter series upto which u want: ";
	cin>>limit;
	showcube(limit);
	return 0;
}
int showcube(int n){
	int a=1, cube=0;
	while(a<=n){
		cube=a*a*a;
		cout<<"Cube of "<<a<<" is "<<cube<<endl;
		a++;
	}
}