#include<iostream>
using namespace std;
int ascending(int[], int);
int main(){
	int arr[]={5,4,3,2,1};
	int size = 5;
	ascending(arr,size);
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
int ascending(int array[], int sz){
	int start =0; 
	int end=sz-1;
	while(start<=end){
		swap(array[start], array[end]);
		start++;
		end--;
	}
}