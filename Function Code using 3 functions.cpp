#include<iostream>
using namespace std;
int deeper(){
	cout<<"I'm in deeper function"<<endl;
}
int deep(){
	cout<<"I'm in deep function"<<endl;
	deeper();
	cout<<"Again I'm in deep function"<<endl;
}
int main(){
	cout<<"I'm in main function"<<endl;
	deep();
	cout<<"Now I'm back in main function"<<endl;
}