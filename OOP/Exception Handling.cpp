#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter two values: ";
	cin>>a>>b;
	try{
		if(b!=0){
			c=a/b;
			cout<<"Dividor of c: "<<c<<endl;
		}
		else{
			throw(b);
		}
	}
	catch(int B){
		cout<<"Error: You divide with "<<B<<endl;
	}
}