#include<iostream>
using namespace std;
int main(){
		float temp[7];
	float total=0;
	double average;
	cout<<"Enter temperature of\n ";
	for(int i=0; i<7; i++){
		cout<<"Day #"<<i+1<<" :";
		cin>>temp[i];
		total=total+temp[i];
	}
	average=total/7.0;
	float max=temp[0], min=temp[0];
	int maxday=0, minday=0;
	for(int i=0; i<7; i++){
		if(temp[i]>max){
			max=temp[i];
			maxday=i;
		}
		if(temp[i]<min){
			min=temp[i];
			minday=i;
		}
	}
	cout<<"   WEEK REPORT\n";
	cout<<"---------------\n";
	cout<<"The average temperature of that week is "<<average<<endl;
	cout<<"The Highest temperature is "<<max<<" at day "<<maxday+1<<endl;
	cout<<"The Lowest temperature is "<<min<<" at day "<<minday+1<<endl;
	cout<<"--------------------------------\n";
		cout<<"Multiples of 3 and 5 \n";
	cout<<"-------------------------------\n";
	int day=1,count=1;
	while(count<=15){
		if(day%3 == 0 && day%5 == 0){
			cout<<"The number is divisible by 3 and 5: "<<day<<endl;
			count++;
		}
		day++;
	}
	cout<<"-------------------------------\n";
	int choice=0, a, b;
	double result;
	const int addition=1, subtraction=2, multiplication=3, divison=4, exist=5;
	cout<<"Enter two numbers(secound number must be +ve): ";
	cin>>a>>b;

	cout<<endl;
	while(choice!=5){
		cout<<"  MENU\n-------------------\n";
		cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n5.Exist\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		while(choice<1||choice>5)
		{
			cout<<"Invalid number!\n"; 
			cout<<"\n  MENU\n-------------------\n";
			cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n5.Exist\n";
			cout<<"Enter again from menu: ";
			cin>>choice;
		}
		
		
			if(choice==1){
				result=a+b;
				cout<<"The addition of "<<a<<" and "<<b<<" is "<<result;
			}
			else if(choice==2){
				result=a-b;
				cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<result;
			}
			else if(choice==3){
				result=a*b;
				cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<result;
			}
			else if(choice==4){
				if(b!=0){
				result=a/b;
				cout<<"The divison of "<<a<<" and "<<b<<" is "<<result;
			}
			else
			cout<<"Cannot divide by zero"<<endl;
			}
			else if(choice==5){
			cout<<"Existing program...";
			return 0;
			}
	}
}
