#include<iostream>
using namespace std;
long long factorial(int);
int main(){
	long long fn, fr, fnr, C;
	int n=10, r=3;
	fn=factorial(n);
	fr=factorial(r);
	fnr=factorial(n-r);
	C=fn/(fr*fnr);
	cout<<"C("<<n<<":"<<r<<") = "<<C<<endl;	
}
long long factorial(int num){
	long long fact=1;
	int i=1;
	while(i<=num){
		fact=fact*i;
		i++;
	}
	return fact;
}