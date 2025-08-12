#include <iostream>
using namespace std;

// void print_sum(int a, int b, int c){
//     int answer = a+b+c;
//     cout << "sum is: " << answer << endl;
// }
// int main(){
//     int a;
//     int b;
//     int c;
//     cin >> a;
//     cin >> b;
//     cin >> c;

//     print_sum(a,b,c);
//     return 0;
// }
int print_sum(int a, int b, int c){
    int answer = a+b+c;
    return answer;
}
int main(){
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;

    int sum = print_sum(a,b,c);

    cout << "sum is: " << sum << endl;
    return 0;
}