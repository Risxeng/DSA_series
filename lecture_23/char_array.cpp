#include <iostream>
#include <string.h>
using namespace std;

// int main() {

//     char ch[10];

//     // cin >> ch;
//     cin.getline(ch,100); //line input with spaces
//     // cout << "printing the value of ch: " << ch;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "At Index: " << i << " " << ch[i] << endl;
//     }
//     char temp = ch[9];
//     int value = (int)temp;
//     cout << "printing integer value: " << value << endl;
    
//}

int findlength(char ch[], int size) {
    int length = 0;

    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }else{
            length++;
        }
        
    }
    return length;
    
}
int main() {
    char ch[100];
    cin >> ch;

    int len = findlength(ch,100);

    cout << "Length of string is: " << len << endl; 
    cout << "Length of string is: " << strlen(ch) << endl; 

}