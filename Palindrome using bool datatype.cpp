#include<iostream>
using namespace std;
bool isPalindrome(string);
int main(){
	string id;
	cout<<"Enter your ID: ";
	cin>>id;

	if(isPalindrome(id)){
		cout<<"Palindrome\n";
	}
	else {
		cout<<"Not a palindrome\n";
	}
}
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