#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// void reverseQueue(queue<int> &q)
// {
//     stack<int> st;
//     while (!q.empty())
//     {
//         st.push(q.front());
//         q.pop();
//     }
//     while (!st.empty())
//     {
//         q.push(st.top());
//         st.pop();
//     }
// }

// void reverseQueueRec(queue<int> &q){
//     if(q.empty() ){
//         return;
//     }
//     int top = q.front();
//     q.pop();
//     reverseQueueRec(q);
//     q.push(top);
// }

// void reverseKElement(queue<int> &q, int k){
//     int n = 8;
//     if(k > n || k ==0){
//         return ;
//     }
//     stack<int> s;
//     while(k--){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
//     for (int i = 0; i < (n-k); i++)
//     {
//         int front = q.front();
//         q.pop();
//         q.push(front);
//     }
// }

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    // reverseQueue(q);
    //cout << "printing Queue: " << endl;
    // while (!q.empty())
    // {
    //     int element = q.front();
    //     q.pop();
    //     cout << element << " ";
    // }


    // reverseQueueRec(q);
    // cout << "printing Queue: " << endl;

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    reverseKElement(q, 3);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
