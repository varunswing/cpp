#include <iostream>

using namespace std;

int main(){
    int age = 100;
    bool human = true;

    int *ageptr;
    bool *humanptr;

    ageptr = &age;
    humanptr = &human;

    cout << age << " --> " << ageptr << endl;
    cout << human << " --> " << humanptr << endl;

    cout << age << " --> " << *ageptr << endl;  
    cout << human << " --> " << *humanptr << endl;

    return 0;
}