#include <iostream>

using namespace std;

class Human{
int age;

public:
    void setAge(int age){
        this->age = age;
    }
    void showAge(){
        cout << this->age << endl;
    }
    
};



int main(){
    Human varun;
    varun.setAge(77);
    varun.showAge();
    
    return 0;
}
