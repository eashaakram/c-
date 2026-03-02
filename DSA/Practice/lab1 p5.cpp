#include<iostream>
using namespace std;
int main(){
	int sz;
	cout<<"Enter size of array: ";
	cin>>sz;
	int arr[sz];
	cout<<"Enter number: ";
	for(int i=0; i<sz; i++){
		cin>>arr[i];
	                      }
	cout<<"The array ";
	for(int i=0; i<sz; i++){
		cout<<arr[i]<<" ";
	                      }
	//Maximum
	int Max=arr[0];
	for(int i=0; i<sz; i++){
		if(arr[i]>Max){
			Max= arr[i];
		           }
	                       }
	//Minimum
	int Min= arr[0];
	for(int i=0; i<sz; i++){
		if(arr[i]<Min){
		        Min= arr[i];
		}
		
	                }
	cout<<"\nMaxium number: "<<Max<<endl;
	cout<<"Minimum number: "<<Min<<endl;
}