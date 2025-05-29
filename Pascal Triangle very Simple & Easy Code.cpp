#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 9; j++) {

            // Line 0
            if (i == 0 && j == 5)
                cout << "1";
            
            // Line 1
            else if (i == 1 && (j == 4 || j == 6))
                cout << "1";
            
            // Line 2
            else if (i == 2 && (j == 3 || j == 7))
                cout << "1";
            else if (i == 2 && j == 5)
                cout << "2";
            
            // Line 3
            else if (i == 3 && (j == 2 || j == 8))
                cout << "1";
            else if (i == 3 && (j == 4))
                cout << "3";
            else if (i == 3 && j == 6)
                cout << "3";
            
            // Line 4
            else if (i == 4 && (j == 1 || j == 9))
                cout << "1";
            else if (i == 4 && (j == 3 || j == 7))
                cout << "4";
            else if (i == 4 && j == 5)
                cout << "6";
            
            // Spaces
            else
                cout << " ";

        }
        cout << endl;
    }
    return 0;
}
