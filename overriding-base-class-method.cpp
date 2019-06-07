#include <iostream>

using namespace std;

class Human{
public:
    void display(){
        cout << "Constructor of base class is called." << endl;        
    }
    
};

class Student : public Human{
public:
    void display(){
        cout << "Constructor of child class is called." << endl;
        Human :: display();
    }
    
};

int main(){
    Student varun;
    varun.display();
    varun.Human :: display();
    
    return 0;
}
