#include <iostream>

using namespace std;

class Human{
private:
    string name;
    int age;

public:
    Human(){
        name = "Varun";
        age = 34;
        cout << "Constructer is called when you create an object of human." << endl;;
    }

    void display(){
        cout << name << " is " << age << " year's old.";
    }

};

int main(){
    Human varun;
    varun.display();
    return 0;
}
