#include <iostream>

using namespace std;

class Human{
protected:              
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};

class Student : protected Human{
public:
    void display(){
        cout << name << endl;
    }
    
    void setStudentName(string iname){
        setName(iname);
    }
};

int main(){
    Student varun;
    varun.setStudentName("Varun");

    varun.display();
    
    return 0;
}
