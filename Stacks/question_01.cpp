#include <iostream>
#include <stack>
using namespace std;

class TwoStack{

    public:

    int *arr;
    int top1;
    int top2;
    int size;

    //ctor
    TwoStack(int n){

        size = n;
        arr = new int[n];
        top1  = -1;
        top2 = size;

    }

    void push1(int element) {
        if(top1 < top2-1){
            top1++;
            arr[top1] = element;
        }else{
            cout << "stck Overflow" << endl;
        }
 
    }
    void push2(int element) {
        if(top1 < top2-1){
            top2--;
            arr[top2] = element;
        }else{
            cout << "stck Overflow" << endl;
        }
 
    }
    int pop1() {
        if(top1 >= 0){
            top1--;
            return arr[top1--];
        }else{
            cout << "stck underflow" << endl;
            return -1;
        }
    }
    int pop2() {
        if(top2 < size){
            top2++;
            return arr[top2++];
        }else{
            cout << "stack underflow" << endl;
            return -1;
        }
    }
    // int peek() {
    //     if (top >= 0 )
    //     {
    //         return arr[top];
    //     }else {
    //         cout << "stack is empty"<< endl;
    //         return -1;
    //     }
        

    // }
    // bool isEmpty() {
    //     if (top == -1)
    //     {
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }

};

int main() {

    TwoStack st(10);

    st.push1(22);
    st.push1(23);
    st.push1(24);
    st.push2(5);
    st.push2(6);
    st.push2(7);

    

    cout << st.pop1() << endl;

    cout << st.pop2() << endl;

    return 0;
}