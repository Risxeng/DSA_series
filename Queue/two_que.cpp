#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// void interLeaveQueue(queue<int> &first) {
//     queue<int> second;
//     int n = first.size();

//     for(int i=0; i<n/2; i++){
//         int temp = first.front();
//         first.pop();
//         second.push(temp);
//     }
//     while (!second.empty()){
//         int temp  = second.front();
//         second.pop();
//         first.push(temp);
//         temp = first.front();
//         first.pop();
//         first.push(temp);
//     }
    
// }

printFirstNeg(int *arr, int n, int k) {
    
}

int main(){
    
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // interLeaveQueue(q);

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    int arr[7] = {2,-5,4,-1,-2,0,5};

    int n = 7;
    int k = 3;

    printFirstNeg(arr,n,k);

    return 0;
}