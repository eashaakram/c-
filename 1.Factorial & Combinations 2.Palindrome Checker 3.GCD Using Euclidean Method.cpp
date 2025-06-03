#include<iostream>
using namespace std;
long long factorial(int);
bool isPalindrome(string);
int gcd(int , int);
int main(){
	cout<<"=== COMBINATIONS (nCr) ==="<<endl;
	long long fn, fr, fnr, C;
	int n=10, r=3;
	fn=factorial(n);
	fr=factorial(r);
	fnr=factorial(n-r);
	C=fn/(fr*fnr);
	cout<<"C("<<n<<":"<<r<<") = "<<C<<endl;	
	cout<<"\n-----------------\n\n";
	cout<<"\n=== PALINDROME CHECKER ==="<< endl;	
	string id;
	cout<<"Enter your ID: ";
	cin>>id;

	if(isPalindrome(id)){
		cout<<"Palindrome\n";
	}
	else {
		cout<<"Not a palindrome\n";
	}
	cout<<"\n-----------------\n\n";

	cout<<"\n=== GCD CALCULATOR ==="<<endl;
	int a, b;
	cout<<"Enter two positive numbers: ";
	cin>>a>>b;
	while(a<=0||b<=0){
	cout<<"Invalid numbers!\nEnter again positive numbers: ";
		cin>>a>>b;
	}
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;

	}
	long long factorial(int num){
	long long fact=1;
	int i=1;
	while(i<=num){
		fact=fact*i;
		i++;
		}
	return fact;}
bool isPalindrome(string s){
	int start=0;
	int end=s.length()-1;
	while(start < end){
		if(s[start]!=s[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}
int gcd(int A, int B){
	while(B!=0){
		int temp=B;
		B=A%B;
		A=temp;	
	}
	return A;
}