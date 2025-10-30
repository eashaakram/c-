#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int age;
		char grade;
		static int count;
	public:
		Student(){
			cout<<++count<<endl;
			cout<<"This is constructor...\n";
		}
		void setvalues(string n, int a, char g){
		 name = n;
		 age = a;
		 grade = g;	
		}
		string getname(){
			return name;
		}
		int getage(){
			return age;
		}
		char getgrade(){
			return grade;
		}
		void show(){
			cout<<"NAME : "<<name<<"\nAGE : "<<age<<"\nGRADE : "<<grade<<endl;
		}
};
int Student::count=0;
int main(){

	Student s1;
	s1.setvalues("EESHA",20,'A');
	s1.show();

	Student s2;
	s2.setvalues("SADIA",21,'B');
	s2.show();
}