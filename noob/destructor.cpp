#include <iostream>

using namespace std;

class Human{
private:
    string *name;
    int *age;

public:
    Human(string iname, int iage){
        name = new string;
        age = new int;
        
        *name = iname;
        *age = iage;
    }

    void display(){
        cout << "Hi! I am " << *name << ". I am " << *age << " years old." << endl;
    }

    ~Human(){
        delete name;
        delete age;
        cout << "All memory is released." << endl;
    }
};

int main(){
    Human *Varun = new Human("Varun", 34);
    Varun -> display();
    delete Varun;

    return 0;
}
