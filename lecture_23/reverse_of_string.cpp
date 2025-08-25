#include <iostream>
using namespace std;
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
void reverse_string (char ch[] , int n) {
    int i =0;
    int j = n-1;

    while (i <= j)
    {
        swap(ch[i] , ch[j]);
        i++;
        j--;
    }
    
}

int main() {
    char ch[100];
    cin >> ch;
    cout << "Before " << ch << endl;
    int len = findlength(ch,100);
    reverse_string(ch,len);
    cout << endl << " After " << ch << endl;  
}