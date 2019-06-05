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

    Human(string iname = "noname", int iage = 0){
        name = iname;
        age = iage;
        cout << "Constructer with name and age as parameter." << endl;
    }
    void display(){  
        cout << name << endl << age << endl;    
    }

};

int main(){
    Human Rahul("Rahul");
    Rahul.display();

    return 0;
}
