#include<iostream>
using namespace std;
class car{
	public:
		//data members
		int price;
		string model, brand, color;
		//function members
		void Break(){
			cout<<"BREAK\n";
		}
		void Gear(){
			cout<<"GEAR\n";
		}
	car(){
		cout<<"This is constructor\n";
	}
	//destructor
	~car(){
		cout<<"This is destructor\n";
	}
};
int main(){
	car obj1;//constructor or destructor called when object write
	obj1.Gear();
	obj1.Break();
	car obj2;//if again object written then again constructor/destructor called
}
