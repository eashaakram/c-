#include<iostream>
using namespace std;
int main()
{
	cout<<"Printing Circle!!!"<<endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && (j == 1 || j == 2)) || (i == 1 && (j == 0 || j == 3)) ||  (i == 2 && (j == 0 || j == 3 )) ||  (i == 3 && (j == 0 || j ==  3)) ||  (i == 4 && (j==1||j == 2)))    

                cout << "*";
            cout << "\t"; 
        }
        cout << "\n";
    }
}