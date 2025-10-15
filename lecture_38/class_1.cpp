#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string gf;
public:
    int id;
    int age;
    string name;
    bool present; 
    int nos;

    //baar baar s1. se id,name dene se acha hai constructor dena 
    //constructor => default constructor
    Student(){
        cout << "Student constructor called:" << endl;
    }
    Student(int id, int age, bool present, string name, int nos, string gfname){
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gfname;
        cout << "Student parameterized constructor called" << endl;
    }
    Student(int id, int age, bool present, string name, int nos){
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout << "Student parameterized constructor without gf called" << endl;
    }
  
    void study(){
        cout << "studying" << endl;
    }
    void sleep(){
        cout << "sleeping" << endl;
    }
    void bunk(){
        cout << "bunking" << endl;
    }
    void gfchatting(){
        cout << "chatting" << endl;
    }
};

int main() {
    //no khokhla student form 
    // Student s1; 

    // s1.name = "Rishav";
    // s1.age = 12;
    // s1.id = 1;
    // s1.nos = 5;
    // s1.present = 0;

    Student s2(1,12,1,"rishav",1,"kritika");

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.id << endl;

    Student s3(2,15,0,"kri",5);

    cout << s3.name << endl;
    cout << s3.age << endl;
    cout << s3.id << endl;

    Student *s4 = new Student(3,34,1,"tika",6);
    cout << s4->name << endl;
    cout << (*s4).name << endl;

    delete s4;
    
    return 0;

}
//hw=>   const, static, initialization list, macro