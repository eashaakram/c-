#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int term=0;
	for(int i=1; i<=n; i++){
	term=term+i;
	cout<<term<<" ";
	}
}