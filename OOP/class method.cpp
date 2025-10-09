#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int age;
	public:
	 learning_sub(){
	cout<<"Student is learning OOP!"<<endl;
	}
	explore(){
		cout<<"Student is exploring OOP!"<<endl;
	}
	inputs(){
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your age: ";
		cin>>age;
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age;
	}
};
int main(){
	student stu;
	stu.learning_sub();
	stu.explore();
        stu.inputs();
	
	return 0;
}