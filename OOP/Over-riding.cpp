#include<iostream>
using namespace std;
class Person{
	public:
		introduce(){
			cout<<"I'm person\n";
		}
};
class Student : public Person{
	public:
		introduce(){
			cout<<"I'm a student\n";
		}
};
int main(){
	Student Ali;
	Ali.introduce();
	Ali.Person::introduce();
}