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

    human arun;
    arun.name = "Arun.";
    arun.display();
    return 0;
}
