#include<iostream>
using namespace std;
class Rectangle{
	private:
		double len, wid;
		public:
			Rectangle(){
				cout<<"Calculate Area and Perimeter\n";
			}
			void setvalues(double l, double w){
				len = l;
				wid = w;
			}
			double getvalues(){
				return len;
				return wid;
			}
			void area(){
				cout<<"Area: "<<len*wid<<endl;
			}
			void perimeter(){
				cout<<"Perimeter: "<<2*(len+wid)<<endl;
				}
			
};
int main(){
	Rectangle r1;
	r1.setvalues(5,2);
	r1.area();
	r1.perimeter();
	r1.setvalues(9,6);
	r1.area();
	r1.perimeter();
}