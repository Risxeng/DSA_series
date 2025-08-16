#include <iostream>
using namespace std;

void count(int *arr , int n){
    int zero_count = 0;
    int one_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            zero_count++;
        }
        else {
            one_count++;
        }
    } 
    int index = 0;
    while (zero_count--) //stops when zero_count becomes "0"
    {
        arr[index] = 0;
        index++;
    }
    while (one_count--)
    {
        arr[index] = 1;
        index++;

    }
    return;
    
}
int main () {

    int arr[] ={0,1,0,1,0,1,1,1,1,0,0,0,0,0};
    int n = 14;
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    count(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}