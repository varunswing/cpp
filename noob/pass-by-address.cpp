#include <iostream>

using namespace std;

void show(int *ptr); 

int main(){
    int age = 24;

    show(&age);

    cout << age << endl;
    
    return 0;
}

void show(int *ptr){    
    
    cout << *ptr << endl;
    *ptr = 100;
}