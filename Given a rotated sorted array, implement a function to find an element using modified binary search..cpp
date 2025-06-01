#include<iostream>
using namespace std;
int main(){
	int target1, target2, count1=0, count2=0;
	int size=10;
	int array[size]={6, 7, 8, 9, 1, 2, 3, 4, 5};
	
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-i; j++){
			if(array[j]>array[j+1]){
			int temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
}
}
cout<<"Array in sorted form\n";
for(int i=0; i<size; i++){
		cout<<array[i]<<" ";
}
cout<<endl;

cout<<"Enter 2 keys u want to find: ";
cin>>target1>>target2;
 for(int i=0; i<size; i++){
	
		if(array[i]==target1)
		{
		cout<<"The key1 comes at index "<<i<<endl;
		count1++;
		}
		if(array[i]==target2)
		{
		cout<<"The key2 comes at index "<<i<<endl;
		count2++;
		}
	}
	if(count1==0){
		cout<<target1<<" Not found (-1)"<<endl;
	}
		if(count2==0){
		cout<<target2<<" Not found (-1)"<<endl;
	}
	cout<<"The key1 "<<target1<<" comes "<<count1<<" times\nThe key2 "<<target2<<" comes "<<count2<<" times\n";
}