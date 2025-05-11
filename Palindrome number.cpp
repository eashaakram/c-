#include<iostream>
using namespace std;
int function();
int main(){
	cout<<"Palindrome Numbers!!"<<endl;
	int number;
	int reverse = 0;
	int original;
	int digit;
	cout<<"Enter any number: ";
	cin>>number;
	original = number;
	while(number != 0)
	{
		digit = number%10;
		reverse = reverse*10+digit;
		number = number/10;
	}
		if(reverse == original)
		{
			cout<<"The number is "<<original<<"\nAfter reversing the number remains same which is "<<reverse<<endl;
			cout<<"So, Yes this number is Palindrome!!"<<endl;
		}
		else
		{
			cout<<"The number is "<<original<<"\nAfter reversing the number does not remains same which is "<<reverse<<endl;
			cout<<"So, The number is not Palindrome!!"<<endl;
		}
	return 0;
}
