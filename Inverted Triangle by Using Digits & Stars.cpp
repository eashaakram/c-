#include<iostream>
using namespace std;
int main(){
	cout<<"Inverted Triangle by Using Digits & Stars"<<endl;
	int num=1;
	for(int i=1; i<=5; i++){
		for(int j=5; j>=1; j--){
			if(i%2==0){
				cout<<num++;
			}
			else if((i==1&&(j==1||j==2||j==3||j==4||j==5))||(i==3&&(j==1||j==2||j==3))||(i==5&&j==1)){
				cout<<"*"; 
				}
			}
				cout<<"\n";
		}
	}
	