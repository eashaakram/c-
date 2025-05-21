#include<iostream>
using namespace std;
struct circle{
	double radius;
	double diameter;
	double area;
};
int main(){
	circle c;
	cout<<"Enter diameter: ";
	cin>>c.diameter;
	c.radius= c.diameter/2;
	c.area=3.14*c.radius*c.radius;
	
	cout<<"The radius and area of circle are: "<<endl;
	cout<<"Radius: "<<c.radius<<endl;
	cout<<"Area: "<<c.area<<endl;
	return 0;
}