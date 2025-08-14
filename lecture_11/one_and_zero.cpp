#include <iostream>
using namespace std;



void count(int arr[], int size){
    int zero_count = 0;
    int one_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
        if (arr[i] == 1)
        {
            one_count++;
        }
    }
    cout << "number of zero's:"<< zero_count << endl;
    cout << "number of one's:"<< one_count << endl;
    
}


int main () {
    
    
    int arr[] = {1,0,1,1,1,1,0,1,0,1};
    int size = 10;

    count(arr,size);

}