#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << a << endl;
    cout << "address of a is: " << &a << endl;

    int *ptr = &a;
    cout << ptr << endl;
    cout << &ptr << endl; 
    cout << "accessing: " << *ptr << endl;

    cout << sizeof(a) << endl;
    cout << sizeof(ptr) << endl;

    return 0;
}
 