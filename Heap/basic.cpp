/* heap => complete BST + 2 PROPS of heap (max heap and min heap)
tree se visualize kr rhe hai
array se implement kr rhe hai (level)

child to parent => i -> i/2
parent to child => left = 2*i
                   right = 2*i + 1


                   heapipification => swaping with parent node
                1. insertion
                2.Deletion
*/

#include <iostream>
using namespace std;

class Heap{
    public: 
        int *arr;
        int capacity;
        int size;

        Heap(int capacity){
            this->arr = new int[capacity];
            this->capacity = capacity;
            size = 0;

        }

        void insert(int val){
            if (size == capacity)
            {
                cout << "Heap Overflow" << endl;
            }
            size++;
            int index = size;
            arr[index] = val;

            while (index > 1) 
            {
                int parentIndex = index/2;
                if(arr[index] > arr[parentIndex]) {
                    swap(arr[index], arr[parentIndex]);
                    index = parentIndex;
                }
                else{
                    break;
                }
            }
            
        }
        void printHeap() {
            for (int i = 1; i <= size; i++)
                {
                    cout << arr[i] << " ";
                }
        }
};

int main() {

    Heap h(20);
 
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout << "printing the heap:" << endl;
    h.printHeap();
    cout << endl;
    return 0;
}
