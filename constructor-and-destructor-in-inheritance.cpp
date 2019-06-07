#include <iostream>

using namespace std;

class Human{
public:
    Human(){
        cout << "Constructor of base class is called." << endl;
    }
    ~Human(){
        cout << "Destructor of base class is called." << endl;
    }
};

class Student : public Human{
public:
    Student(){
        cout << "Constructor of child class is called." << endl;
    }
    ~Student(){
        cout << "Destructor of child class is called." << endl;
    }
};

int main(){
    Student varun;
    
    return 0;
}
