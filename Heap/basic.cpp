/* heap => complete BST + 2 PROPS of heap (max heap and min heap)
tree se visualize kr rhe hai
array se implement kr rhe hai (level)

child to parent => i -> i/2
parent to child => left = 2*i
                   right = 2*i + 1


                heapipification => swaping with parent node 0(logn)
                1.insertion
                2.Deletion 0(logn); if input mai array hai then tc 0(n) bn jata hai 
                3.max => 0(1)
                4.min => 0(1)
*/

#include <iostream>
using namespace std;

class Heap{
    public: 
        int *arr;
        int capacity;
        int size;

        //constructor
        Heap(int capacity){
            this->arr = new int[capacity];
            this->capacity = capacity;
            size = 0;
        }

        void insert(int val){
            if (size == capacity)
            {
                cout << "Heap Overflow" << endl;
                return;
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

        int deletefromHeap (){
            int answer = arr[1];
            arr[1] = arr[size]; 
            size--;

            int index = 1;
            while (index < size)
            {
                int leftIndex = 2*index;
                int rightIndex = 2*index+1;

                int largestkaIndex = index;
                if(leftIndex <= size && arr[largestkaIndex] < arr[leftIndex]) {
                    largestkaIndex = leftIndex;
                }
                if (rightIndex <= size && arr[largestkaIndex] < arr [rightIndex])
                {
                    largestkaIndex = rightIndex;
                }

                if(index == largestkaIndex){
                    break;
                }else{
                    swap(arr[index], arr[largestkaIndex]);
                    index = largestkaIndex;
                }
            } 
            return answer;
        }
};

int main() {

    Heap h(20);
 
    h.insert(10); 
    h.insert(30);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout << "printing the heap:" << endl;
    h.printHeap();
    cout << endl;
    int ans = h.deletefromHeap();
    cout << "Answer: " << ans << endl;
    cout << "printing the heap:" << endl;
    h.printHeap();
    cout << endl;
    return 0;
}
