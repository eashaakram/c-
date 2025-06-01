#include<iostream>
using namespace std;
int popu(int , int ,int);
int main(){
	int p,b,d; //p=population, b=birth_rate, d=death_rate;
	int year;
	cout<<"Enter starting size of a population(it must be > 2): ";
	cin>>p;
	cout<<"Enter the annual birth rate(it must be > 0): ";
	cin>>b;
	cout<<"Enter the annual death rate(it must be > 0): ";
	cin>>d;
	cout<<"Enter number of years(it must be >or= 1) :";
	cin>>year;
	
		while(p<2 || b<0 || d<0 || year<1){
			cout<<"Invalid, Try Again!\n";
			cout<<"Enter valid Starting size now: ";
			cin>>p;
			cout<<"Enter birth rate again in +ve: ";
			cin>>b;
			cout<<"Enter death rate again in +ve: ";
			cin>>d;
			cout<<"Enter year again greater than or equal to 1: ";
			cin>>year;
		}
		
	int pop=popu(p,b,d);
	cout<<"  ===TABLE===\n";
	cout<<"Year\tPopulation\n";
	for(int y=1; y<=year; y++){
		cout<<y<<"\t"<<pop<<endl;
	}
}
int popu(int P,int B,int D){
	return P+(B*P)-(D*P);
}