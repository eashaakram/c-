#include<iostream>
using namespace std;
void display(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swap(int arr1[],int arr2[],int size){
	for(int i=0; i<size; i++){
		int temp= arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
} 
int main(){
	int arr1[4]={1,2,3,4};
	int arr2[4]={5,6,7,8};
	cout<<"Array 1:";
	display(arr1,4);
	cout<<"Array 2:";
	display(arr2,4);
	swap(arr1,arr2,4);
	cout<<"After Swap:\n";
	cout<<"Array 1:";
	display(arr1,4);
	cout<<"Array 2:";
	display(arr2,4);
}