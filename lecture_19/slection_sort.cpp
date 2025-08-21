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
void selection_sort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i; // ith element is the smallest element
        for (int j = i+1; j < n; j++)
        {
          if (v[j] < v[minIndex])
          {
            minIndex = j;
          }  
        }
        swap(v[i], v[minIndex]);
    }
}

int main () {
    vector<int>arr = {44,33,55,22,11};
    cout << "Array before sorting"<< endl;
    print(arr);
    selection_sort(arr);
    cout << "Array after sorting"<< endl;
    print(arr);
    return 0;
}