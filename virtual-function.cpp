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

class Farmer : public Human{
public:
};

void intro(Human *h){
    h->display();
}

int main(){
    Student varun;
    Farmer om;
    intro(&varun);
    intro(&om);
    
    return 0;
}