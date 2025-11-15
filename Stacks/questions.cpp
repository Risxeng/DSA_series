// #include <iostream>
// #include <stack>
// using namespace std;
                //question = 01
// int main() {
//     string str = "babbar";

//     stack<char> s;

//     for (int i = 0; i < str.length(); i++)
//     {

//         char ch = str[i];
//         s.push(ch);

//     }

//     string ans = "";

//     while (!s.empty())
//     {
//         char ch = s.top();
//         ans.push_back(ch);

//         s.pop();
//     }
    
//     cout << "answer is: " << ans << endl;
    
//     return 0;
// }

                //question = 02

// void DeleteMiddleElement(stack<int>&s, int current, int middle) {

//     if (current == middle)
//     {
//         s.pop();
//         return;
//     }

//     int top = s.top();
//     s.pop();

//     DeleteMiddleElement(s,current+1,middle);

//     s.push(top);

// }
// int main() {

//     stack<int> s;

//     for (int  i = 50; i < 56; i++)
//     {
//         s.push(i);
//     }

//     int n = s.size();
//     int middle = n/2;
//     int current = 0;

//     DeleteMiddleElement(s, current, middle);

//     cout << "stack after deleting middle element: " << endl;

//     while (!s.empty())
//     {
//         cout << s.top() << " " ;
//         s.pop();
//     }
    
    
//     return 0;
// }

                        //question = 03
// bool isvalid(string s) {
//     stack<char> st;

//     for(char ch : s){
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             st.push(ch);
//         }
//         else if(ch == ')' || ch == '}' || ch == ']'){
//             if(s.empty()) {
//                 return false;
//             }
//             char top = st.top();
//             st.pop();

//             if((ch == ')' && top != '(') ||
//                 (ch == '{' && top != '}') ||
//                 (ch == '[' && top != ']')) {
//                     return false;
//                 }
//         } 
//     }
//     return st.empty();

// }

// int main() {

//     string s;
//     cout << "Enter Parenthesis string: " ;
//     cin >> s;

//     if(isvalid(s)) {
//         cout << " valid Parenthesis" << endl;
//     }else{
//         cout << " invalid parenthesis" << endl;
//     }
//     return 0;
// }


                //question = 04

// void InsertAtBottom(stack<int> &s, int x) {


//     if (s.empty())
//     {
//         s.push(x);
//         return;
//     }

//     int top = s.top();
//     s.pop();

//     InsertAtBottom(s,x);

//     s.push(top);
    
// }

// int main () {

//     stack <int> s;
//     int x;
//     cout << "enter the number " << endl;
//     cin >> x;

//     for (int i = 50; i < 56; i++)
//     {
//         s.push(i);
//     }

//     InsertAtBottom(s,x);

//     cout << "stack after inserting at bottom: " << endl;

//     while (!s.empty()) {
//         cout << s.top() << " " ;
//         s.pop();
//     }

//     return 0;

// }

            //question = 05

// void InsertAtBottom(stack<int> &s, int x) {


//     if (s.empty())
//     {
//         s.push(x);
//         return;
//     }

//     int top = s.top();
//     s.pop();

//     InsertAtBottom(s,x);

//     s.push(top);
    
// }
// void ReverseofStack(stack<int> &s) {

//     if(s.empty()) {
//         return;
//     }

//     int top = s.top();
//     s.pop();

//     ReverseofStack(s);

//     InsertAtBottom(s,top);

    
// }
// int main() {

//     stack <int> s;

//     for (int i = 50; i < 56; i++)
//     {
//         s.push(i);
//     }

//     ReverseofStack(s);

//     cout << "reversed stack: " << endl;
//     // cout << "unreversed stack: " << endl;


//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }  

//     return 0;
// }


                //question = 06
// void sortedInsert(stack<int> &s,int x){

//     if (s.empty() || x > s.top())
//     {
//         s.push(x);
//         return;
//     }

//     int top = s.top();
//     s.pop();

//     sortedInsert(s,x);
//     s.push(top);

// }
// void sorting(stack<int> &s){

//     if (s.empty()) {
//         return;
//     }
    
//     int top = s.top();
//     s.pop();

//     sorting(s);

//     sortedInsert(s,top);

// }
// int main() {

//     stack<int> s;

//     s.push(30);
//     s.push(-5);
//     s.push(18);
//     s.push(14);
//     s.push(-3);

//     // for (int i = 50; i < 56; i++)
//     // {
//     //     s.push(i);
//     // }

//     cout << "original stack: " ;
//     stack<int> temp = s;
//     while(!temp.empty()) {
//         cout << temp.top() << " ";
//         temp.pop();
//     }
//     cout << endl;

//     sorting(s);

//     cout << "sorted stack : " << " ";
//     while (!s.empty()) 
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }

                    //question = 07
// bool isredundant(string &str){

//     stack<char> st;

//     for(char ch: str){
//         if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
//             st.push(ch);
//         }else if (ch == ')')
//         {
//             bool isredundant = true;

//             while(!st.empty() && st.top() != '('){
//                 char top = st.top();
//                 if (top == '+' || top == '-' || top == '*' || top == '/')
//                 {
//                     isredundant = false;
//                     st.pop();
//                 } 
//             }
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//             if(isredundant){
//                 return true;
//             }
//         }
//     }
//     return false;

// }
// int main() {

//     string str;
//     cout << " Enter the string: " ;
//     cin >> str;

//     isredundant(str);

//     if (isredundant(str) == true)
//     {
//         cout << "Redumdant brackets found!"<< endl;
//     }else{
//         cout << "Redumdant brackets not found!"<< endl;
//     }

//     return 0;
// }

                    // question = 08
// int main() {

    

//     return 0;
// }