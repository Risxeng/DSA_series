#include <iostream>
using namespace std;

int main() {
    string name;
    getline(cin,name);

    cout << "printing name: " <<  name << endl;
    cout << "printing the first character: " <<  name[0] << endl;

    int index = 0;
    while (name[index] != '\0')
    {
        cout << "index: " << index << "character: " << name[index] << endl;
        index++;
    }
        cout << "at index 6 the character: " << name[6] << endl;
        int value = (int)name[6];

        cout << "value: " << value << endl;
    

}