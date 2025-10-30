#include<iostream>
using namespace std;
class Circle{
	double radius;
	public:
		void setR(double r){
			radius = r;
		}
		double getR(){
			return radius;
		}
		void area(){
			cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
		}
};
int main(){
	Circle c;
	double rad;
	cout<<"Enter radius of Circle: ";
	cin>>rad;
	c.setR(rad);
	c.area();
}