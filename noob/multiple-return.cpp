#include <iostream>

using namespace std;

bool check(int); 

int main(){
    if(check(16))
        cout << "You are adult.";    
    else
        cout << "You are kid.";
    return 0;
}

bool check(int age){    
    if(age <= 18)
        return true;
    else
        return false;
}