#include <iostream>
#include <vector>
using namespace std;

void storeevennumber(int arr[],int size,int index,vector<int> &ans){
    if(index >= size){
        return;
    }
    if(arr[index] %2 == 0){
        ans.push_back(arr[index]);
    }
    storeevennumber(arr, size, index+1, ans);

}

int main() {
    int arr[] = {11,12,13,14,15,16,17,18};
    int size = 8;
    int index = 0;
    
    vector<int> ans;

    storeevennumber(arr, size, index, ans);

    for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
}