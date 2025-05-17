#include<iostream>
using namespace std;
int main()
{
	int choice, value;
	cout<<"Currency convertor"<<endl;
	cout<<"Press 1 for USD to PKR and 2 for PKR to USD:";
	cin>>choice;
	cout<<"Enter your amount:";
	cin>>value;
	switch(choice)
	{
		case 1:
			cout<<"Result:"<<value*279.02<<endl;
			break;
		case 2:
			cout<<"Result:"<<value*0.0036<<endl;
			break;
		default:
			cout<<"Invalid Choice"<<endl;
	}
}