#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

class Person{
    char name[80];
    int age;
    public:
        Person(){
            strcpy(name, "noname");
            age = 0;
        }
        Person(char *name, int age){
            strcpy(this->name, name);
            this->age = age;
        }

    void whoAreYou(){
        cout << "Hi I am " << name << ". I am " << age << " years old." << endl;
    }
    void change(){
        strcpy(name, "xxxx");
        age = 10000;+---------
    }
};

int main(){
    Person anil("varun", 24);

    fstream file("person.bin", ios::out | ios::in | ios::binary | ios::trunc);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{               
        file.write((char *) &anil, sizeof(Person));
        file.seekg(0);

        Person anjali;
        file.read((char *) &anjali, sizeof(Person));

        anil.whoAreYou();
        anil.whoAreYou();

        anil.change();

        anil.whoAreYou();
        anjali.whoAreYou(); 
    }
}