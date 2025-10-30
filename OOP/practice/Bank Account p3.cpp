#include<iostream>
using namespace std;
class BankAcc{
	private:
		int AccNum;
		double balance;
		public:
		//Parameterized Constructor
		BankAcc(int AN, double bal){
			AccNum = AN;
			balance = bal;
		}
		void deposit(double bal){
			if (bal > 0){
				balance += bal;
			}
		}
		void withdraw(double bal){
			if (balance > bal){
			balance -= bal;
			}
			else{
				cout<<"You don't have enough ammount\n";
			}
		}
		void show(){
			cout<<"Current Amount\nBalane: "<<balance<<endl;
		}
};
int main(){

BankAcc b1(1234, 1000);
b1.show();
b1.deposit(0);
b1.withdraw(500);
b1.show();
b1.deposit(500);
b1.show();
b1.withdraw(500);
b1.show();
}