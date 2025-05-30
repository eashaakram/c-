#include<iostream>
using namespace std;
void displaymessage(){
	cout<<"Hello from Function displaymessage"<<endl;
}
int main(){
	cout<<"Hello from main"<<endl;
	for(int i=0; i<5; i++){
		displaymessage();
	}
	cout<<"Back in main"<<endl;
}