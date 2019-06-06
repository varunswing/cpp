#include <iostream>

using namespace std;

class Human{
protected:                      // Can be used in same class and in its sub classes too.
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};

class Student : public Human{
public:
    void display(){
        cout << name << endl;
    }
};

int main(){
    Student varun;
    varun.setName("Varun");

    varun.display();
    
    return 0;
}
