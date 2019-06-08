#include <iostream>

using namespace std;

class Human{
public:
    virtual void display()=0;
    
};

void Human :: display(){
    cout << "Constructor of Human class is called." << endl;
}

class Student : public Human{
public:
    void display(){
        cout << "Constructor of Student class is called." << endl;
    }
};

int main(){
    Student varun;
    varun.display();

    
    return 0;
}