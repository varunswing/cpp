#include <iostream>

using namespace std;

class Human{
private:
    string name;
    int age;

public:
    Human(){
        name = "Noname";
        age = 0;
        cout << "Default constructer. " << endl;
    }
    Human(string iname){
        name = iname;
        age = 0;
        cout << "Constructer with name as parameter." << endl;
    }
    Human(int iage){
        name = "Noname";
        age = iage;
        cout << "Constructer with age as parameter." << endl;
    }
    Human(string iname, int iage){
        name = iname;
        age = iage;
        cout << "Constructer with name and age as parameter." << endl;
    }
    void display(){  
        cout << name << endl << age << endl;    
    }

};

int main(){
    Human Aman;
    Aman.display();

    Human Varun("Varun");
    Varun.display();

    Human Alex(5);
    Alex.display();

    Human Rahul("Rahul", 23);
    Rahul.display();

    return 0;
}
