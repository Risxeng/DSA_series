#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(50);
    q.push(51);
    q.push(52);
    q.push(53);
    q.push(54);
    q.push(55);


    cout << "Size of Queue: " << q.size() << endl;

    if (q.empty() == true)
    {
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }

    q.pop();

    cout << "Size of Queue: " << q.size() << endl;

    cout << "front element of Queue is: " << q.front() << endl;

    return 0;
    
}