//PRACTICE 
#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int rollno, age;
	//function members
	void learning(string n){
		cout<<n<<" is learning OOP!"<<endl;
	}
	student(){
		cout<<"Student is in Software Engineering department\n";
	}
	~student(){
		cout<<"Student "<<name<<" is not deciding to quit this course\n";
	}
};
int main(){
	student st1;
	cout<<"Enter your name: ";
	cin>>st1.name; 
	cout<<"Enter your age: ";
	cin>>st1.age; 
	cout<<"Enter your roll number: ";
	cin>>st1.rollno;
	st1.learning(st1.name); 
}
