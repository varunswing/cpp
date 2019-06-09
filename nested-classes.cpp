#include <iostream>

using namespace std;

class Human{
public:
    string caste;

    class Student{
    public:
        string name;
        string address;
        int age;
    };
    
    Student varun;
    void HumanS(){
        cout << varun.name << endl << varun.address << endl << varun.age << endl << caste << endl;
    }
};

int main(){
    Human anil;
    anil.caste = "Bhumhihar";
    anil.varun.name = "Varun";
    anil.varun.address = "Patna";
    anil.varun.age = 45;
    anil.HumanS();

    return 0;
}
