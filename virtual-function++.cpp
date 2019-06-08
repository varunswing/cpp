#include <iostream>

using namespace std;

class Human{
public:
    virtual void display(){
        cout << "Constructor of Human class is called." << endl;        
    }
    
};

class Student : public Human{
public:
    void display(){
        cout << "Constructor of Student class is called." << endl;
    }
};

class GStudent : public Student{
public:
};

void intro(Human &h){
    h.display();
}

int main(){
    Student varun;
    Human anil;
    GStudent aman;
    intro(varun);
    intro(anil);
    intro(aman);
    
    return 0;
}