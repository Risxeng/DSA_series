void popFront() {
            if(front == -1 && rear ==-1){
                cout << "Underflow" << endl;
            }
            else if(front == rear) {
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            else if(front == size-1) {
                arr[front] = -1;
                front = 0;
            }
            else{
                arr[front] = -1;
                front++;
            }
        }