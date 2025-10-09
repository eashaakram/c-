//PRACTICE 
#include<iostream>
using namespace std;
class LibraryBook{
	private:
		double price;
	public:
		string title,author;
		int page;
		void addBook(){
			cout<<"Enter book name: ";
			cin>>title;
			cout<<"Enter author name: ";
			cin>>author;
		}
		void showBook(int pg){
			cout<<"Book:"<<title<<" by "<<author<<" ("<<page<<" pages)\n";
		}
	//Constructor
		LibraryBook() {
        		cout << "A new book record is created in the library.\n";
    }
    //destructor
		~LibraryBook(){
			cout<<"Book "<<title<<" record deleted from library system\n";
		}
};
int main(){
	LibraryBook b1;
	cout<<">>>Book 1<<<\n";
	b1.page = 1000;
	b1.addBook();
	b1.showBook(b1.page);
	LibraryBook b2;
	cout<<">>>Book 2<<<\n";
	b2.page = 2000;
	b2.addBook();
	b2.showBook(b2.page);
	
	}
