#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        char ch;
       for (int col = 0; col < row+1; col++)
       {
        int number = col+1;
        ch = number + 'A' -1;
        cout << ch;
       }
       for(char aplhabet = ch; aplhabet > 'A';){
        aplhabet = aplhabet-1;
        cout << aplhabet;
       }cout << endl;
      
    }
    
}