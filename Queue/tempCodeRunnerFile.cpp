void reverseKElement(queue<int> &q, int k){
    int n = 8;
    if(k > n || k ==0){
        return ;
    }
    stack<int> s;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < (n-k); i++)
    {
        int front = q.front();
        q.pop();
        q.push(front);
    }
}