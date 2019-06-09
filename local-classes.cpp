#include <iostream>

using namespace std;

void student(){
    class Human{
    public:
        string name;
        int age;
        void display(){
        cout << name << endl << age << endl;
        }
    };
Human varun;
varun.name = "Varun";
varun.age = 45;
varun.display();
}

int main(){
    student();

    return 0;
}
