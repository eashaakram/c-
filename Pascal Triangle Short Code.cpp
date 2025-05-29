#include<iostream>
using namespace std;
int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        int val = 1;  
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
	cout << endl;
    }
return 0;
}  