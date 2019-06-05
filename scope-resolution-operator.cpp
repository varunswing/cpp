#include <iostream>

using namespace std;

class human{
public:
    string name = "noname";
    void display();
};

void human :: display(){
    cout << "Hey! I am " << human :: name << endl;
    
}


int main(){
    human varun;
    varun.name = "Varun.";
    varun.display();
    return 0;
}
