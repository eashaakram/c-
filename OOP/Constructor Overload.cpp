#include<iostream>
using namespace std;
class car{
	int price;
	string name;
	public:
		car(){
			cout<<"Constructor!"<<endl;
		}
		car(int a){
			cout<<"2nd Constructor!"<<endl;
			price = a;
		}
		car(int a, string n){
			price = a;
			name = n;
		}
		void show(){
			cout<<"Name of car: "<<name<<endl;
		}
};
int main(){
	car obj1;
	car obj2(101);
	car obj(101,"Honda");
	obj.show();
	return 0;
}