#include <iostream>

using namespace std;

class Person{
public:
    string *name;
    int age;

    Person(string name, int age){
        this->name = new string(name);
        this->age = age;
    }

    Person(const Person &p){
        cout << "copy constructer is called" << endl;
        name = new string(*p.name);
        age = p.age;
    }

    void changeNameandAge(string name, int age){
        *(this->name) = name;
        this->age = age;
    }

    void introduce(){
        cout << "Hi! I am " << *name << ". I am " << age << " years old."<<endl;
    }
};

int main(){
    Person varun("Varun", 10);
    varun.introduce();

    Person duplicatevarun = varun;
    duplicatevarun.introduce();

    varun.changeNameandAge("Arun", 34);
    varun.introduce();
    duplicatevarun.introduce();

    return 0;
}
