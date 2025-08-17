#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main () {

    // int arr[5];
    // vector<int> v(5,23);

    // cout << "size of vector: " << v.size();
    // cout << endl << "printing vector" << endl;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }cout << endl;
    
    // return 0;


        // 2D- array using vector
    vector<vector<int>> arr(5, vector<int>(10,0));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }
    

}