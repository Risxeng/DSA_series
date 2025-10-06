#include <iostream>
using namespace std;

void solve(int *arr, int size){
    // cout << "size of array inside solve func: " << sizeof(arr) << endl;
    // cout << "inside the solve -> arr: " << arr << endl;
    // cout << "inside the solve -> &arr: " << &arr << endl;

    *arr = *arr+1;
}

int main() {


    int arr[5] = {10,20,30,40,50};
    // cout << "size of array: " << sizeof(arr) << endl;
    solve(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    

    // cout << "inside the main -> arr: " << arr << endl; 
    // cout << "inside the main -> &arr: " << &arr << endl;


    
    // int arr[5] = {1,2,3,4,5};
    // array of pointers
    // int *arr[5]

    //pointer to an array
    // int*ptr = arr;

    //pointer to an array
    // int(*ptr)[5] = &arr; 

    // cout << (*ptr)[0] << endl;


    return 0;
}