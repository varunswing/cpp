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

class GStudent : private Student{
public:
    void display(){
        cout << name << endl;
    }
    
    void setGStudentName(string iname){
        setStudentName(iname);
    }
};

int main(){
    GStudent varun;
    varun.setGStudentName("Varun");

    varun.display();
    
    return 0;
}
