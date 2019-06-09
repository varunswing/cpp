#include <iostream>

using namespace std;

class Human{
public:
    Human(){
        cout << "Human is homosapian." << endl;
    }
    int age;
    void setName(){
        cout << "Human sings." << endl;
    }
};

class Student : virtual public Human{
public:
    Student(){
        cout << "Student is homosapian." << endl;
    }
};

class GStudent : virtual public Student{
public:
    GStudent(){
        cout << "GStudent is homosapian." << endl;
    }
};

int main(){
    GStudent varun;
    varun.setName();
    
    return 0;
}
