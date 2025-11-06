#include<iostream>
using namespace std;
class A{
	public:
		string name;
		int id;
		A(){
			cout<<"This is Constructor of class A"<<endl;
		}
		~A(){
			cout<<"Destructor of A"<<endl;
		}
};
class B{
	public:
	B(){
			cout<<"This is Constructor of class B"<<endl;
		}
		~B(){
			cout<<"Destructor of B"<<endl;
		}
};
class C{
	public:
	C(){
			cout<<"This is Constructor of class C"<<endl;
		}
		~C(){
			cout<<"Destructor of C"<<endl;
		}
};
class D: public A, public B, public C{
	public:
	D(string n, int Id){
			cout<<"This is Constructor of class D derived from ABC"<<endl;
			name = n;
			id = Id;
			cout<<"Name: "<<name<<endl;
			cout<<"Sap Id: "<<id<<endl;
		}
		~D(){
			cout<<"Destructor of D"<<endl;
		}
};
int main(){
	D d("Easha",70174092);
}
