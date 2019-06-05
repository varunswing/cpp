#include <iostream>

using namespace std;

class human{
public:
    string name;
    void display(){
        cout << "Hey! I am " << name << endl;
    }
};


int main(){
    human varun;
    varun.name = "Varun.";
    varun.display();

    human *anil = new human();
    anil->name = "Anil.";
    anil->display();
    return 0;
}
