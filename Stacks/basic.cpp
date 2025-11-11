#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack <int> s;

    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.push(17);
    s.push(18);
    s.push(19);


    s.pop();

    cout << "printing the top element of the stack: " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty " << endl;
    }else{
        cout << "stack is not empty " << endl;
    }

    cout << "size of stack is " << s.size() << endl;
    return 0;
}