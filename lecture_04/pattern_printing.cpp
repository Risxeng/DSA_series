#include <iostream>
using namespace std;

int main(){
    int i=0;
    int j=0;
    for(int i = 0; i<5;i++){
        if (i == 0 || i == 4) 
        {
            for(int j=0;j<6;j++){
                cout << "*";
            }
        }
        else{
            cout << "*    *";
        }cout << endl;
    }
};