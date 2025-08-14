#include <iostream>
using namespace std;

int main() {

    int size = 10;
    int arr[] = {57,76,23,99,87,23,75,5,33,67};

    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    cout << "minimum number is: " << min << endl;
    return 0;
}