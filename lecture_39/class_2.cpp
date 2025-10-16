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
  
    //copy constructor
    Student(const Student&srcobj){
    cout<< "copy constructor called" << endl;
    this->name = srcobj.name; 
    this->age = srcobj.age;
    this->id = srcobj.id;
    this->gf = srcobj.gf;
    this->nos = srcobj.nos;
    this->present = srcobj.present;

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

    ~Student() {
        cout << "Student deconstructor called" << endl;
    }

};

int main() {

    {    Student s1(1,12,1,"Rishav", 1, "Kritika");
        cout << s1.name << endl;
    }

    Student s2;
    // Student s2 = s1;
    // Student s2(s1);
    // s2 = s1; //bad practise
    
    // cout << s2.name << endl;

    return 0;

}