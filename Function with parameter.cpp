#include<iostream>
using namespace std;
void displayvalue(int);
int main(){
	cout<<"I'm passing 5 to displayvalue"<<endl;
	displayvalue(5);
	cout<<"Now I'm Back in main"<<endl;
}
void displayvalue(int n){
	cout<<"The value is "<<n<<endl;
}