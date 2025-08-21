#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &v){
    for (int i = 0; i < v.size(); ++i)
    {
      cout << v[i] << " ";  
    }
    cout << endl;
}
void insertion_sort (vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int key = v[i];
        int j = i-1;

        while (j >= 0 && v[j]> key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    
}

int main () {
    vector<int>arr = {44,33,55,22,11};
    cout << "Array before sorting"<< endl;
    print(arr);
    insertion_sort(arr);
    cout << "Array after sorting"<< endl;
    print(arr);
    return 0;
}
