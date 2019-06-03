#include <iostream>

using namespace std;

void display();
void display(string name);

int main(){
    display();
    display("Varun");
    return 0;
}

void display(){
    cout << "Hey! what's up." << endl;
}

void display(string name){
    cout << "Hey! what's up " << name << endl;
}