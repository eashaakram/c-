#include<iostream>
using namespace std;
class Product{
	string name;
	int price;
	public:
		//default Constructor
		Product(){
			name = "Unknown";
			price = 0;
		}
		//Parameterized Constructor
		Product(string n, int p){
			name = n;
			price = p;
		}
		~Product(){
			cout<<"Prouct "<<name<<" is destroyed!\n";
		}
		void setvalues(string n,int p){
			name = n;
			price = p;
		}
		string getName(){
			return name;
		}
		int getPrice(){
			return price;
		}
		void show(){
			cout<<"Name : "<<name<<"\nPrice : "<<price<<endl;
		}
};
int main(){
	Product P1;
	P1.show();//show default values
	P1.setvalues("Laptop",80000);
	P1.show();
	Product P2;
	P2.setvalues("Mobile", 50000);
	P2.show();
}