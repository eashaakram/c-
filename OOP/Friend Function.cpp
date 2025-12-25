//#include<iostream>
//using namespace std;
//
//class ABC {
//private:
//    int a = 5;      // private data
//
//public:
//    // friend class
//    friend class XYZ;
//};
//
//class XYZ {
//public:
//    void show(ABC obj) {
//        cout << obj.a << "\n";   // accessing private member of ABC
//    }
//};
//
//int main() {
//    ABC obj1;
//    XYZ obj2;
//
//    obj2.show(obj1);   // XYZ accessing ABC's private data
//
//    return 0;
//}







#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    // friend function declaration
    friend void showLength(Box b);
};

// friend function definition
void showLength(Box b) {
    cout << "Length = " << b.length << endl;  
}

int main() {
    Box b1(10);

    showLength(b1);  // friend function private data access kar raha hai
}
