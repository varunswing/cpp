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
    using Human :: name;
    using Human :: setName;

    void display(){
        cout << name << endl;
    }
    
    void setStudentName(string iname){
        setName(iname);
    }
};

int main(){
    Student varun;
    varun.name;
    varun.setName("Varun");

    varun.display();
    
    return 0;
}
