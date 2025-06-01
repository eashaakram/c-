#include<iostream>
using namespace std;
int showvalue(int[], int);
int main(){
	int size=8;
	int values[size];
	cout<<"Enter 8 values:\n";
	for(int i=0; i<size; i++){
	cin>>values[i];
	}
	
	
	showvalue(values,size);
	
}
//define
int showvalue(int num[], int sz){
	for(int i=0; i<sz; i++){
		cout<<num[i]<<" ";
		
	}
}