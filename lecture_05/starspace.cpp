#include <iostream>
using namespace std;

int main () {

    // int n;
    // cin >> n;
    
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         if (row == 0 || row == n-1)
    //         {
    //             cout << "*";
    //         }else{
    //             if (col == 0 || col == n-row-1)
    //             {
    //                 cout << "*";
    //             }else{
    //                 cout << " ";
    //             }
                
    //         }
            
    //     }
    //     cout << endl;
        
    // }



    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {   
     for (int col = 0; col < row+1; col++)
     {
        if (row == 0 || row == n-1)
        {
            cout << col+1;
        }else{
            if (col == 0)
            {
                cout << "1";
            }
            if (col == row)
            {
                cout << row+1;
            }else{
                cout << "_";
            }
        }
     }cout << endl;
        
    }
    
    
}