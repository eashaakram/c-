#include<iostream>
using namespace std;
//hierarchical inheritance
class A{
	public:
		A(){
			cout<<"This is A constructor!"<<endl;
		}
		~A(){
			cout<<"This is A destructor!"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"This is B constructor!"<<endl;
		}
		~B(){
			cout<<"This is B destructor!"<<endl;
		}
};
class C:public A{
	public:
		C(){
			cout<<"This is C constructor!"<<endl;
		}
		~C(){
			cout<<"This is C destructor!"<<endl;
		}
};
class D:public A{
	public:
		D(){
			cout<<"This is D constructor!"<<endl;
		}
		~D(){
			cout<<"This is D destructor!"<<endl;
		}
};
class E:public B{
	public:
		E(){
			cout<<"This is E constructor!"<<endl;
		}
		~E(){
			cout<<"This is E destructor!"<<endl;
		}
};
int main(){
	E obj1;
	cout<<"\n----\n";
	C obj2;
	cout<<"\n----\n";
	D obj3;
	cout<<"\n----\n";
}
