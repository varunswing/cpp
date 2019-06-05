#include <iostream>

using namespace std;

class human{
private:
    int age;
    int getAge(){
        return age - 5;
    }

public:
    void display(){
        cout << getAge();
    }

    void setAge(int value){
        age = value;
    }
};

int main(){
    human varun;
    varun.setAge(55);
    varun.display();
    return 0;
}
