#include<iostream>
using namespace std;
int factorial(int);
int fact=1;
int main()
{
	int n;
	cout<<"=====Factorial Code====="<<endl;
	cout<<"Enter number for factorial: ";
	cin>>n;

	cout<<factorial(n)<<" is the number of factorial of "<<n<<"\n";
}
int factorial(int num){
	 if (num == 0 || num == 1) 
        return 1;
        return num*factorial(num-1);
}