#include<iostream>
using namespace std;

int main() {
	cout<<"Printing Flyod Triangle"<<endl;
    int num=1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout<< num++;
        }
        cout<<"\n";
    }
    return 0;
}
