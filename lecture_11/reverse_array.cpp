#include <iostream>
using namespace std;

int main () {

    int arr[] = {23,44,56,34,76,45,97,69,10};

    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0])-1;

    while (s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        e--;
        s++;
    }
    cout << "Element of reverse array is: " << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}