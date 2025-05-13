#include<iostream>
using namespace std;
int main(){
	cout<<"Inverted Triangle with Digits & Star!"<<endl;
	int num=1;
	for(int i=5; i>=1; i--){
		for(int j=1; j<=i; j++){
		if(i%2==0){
			if((i==4&&(j==1||j==2||j==3||j==4))||(i==2&&(j==1||j==2)))
			cout<<num++;}		
		else
		if((i==5&&(j==1||j==2||j==3||j==4||j==5))||(i==3&&(j==1||j==2||j==3))||(i==1&&j==1))
		cout<<"*";
		 
		
	}
		cout<<"\n";
	}
}     