#include <iostream>

using namespace std;

template <class MYTYPE> class Myclass{
    MYTYPE p1;
    MYTYPE p2;

public:
    Myclass(MYTYPE x, MYTYPE y){
        p1 = x;
        p2 = y;
    }

    void display(){  
        cout << p1 << " and " << p2 << endl;    
    }
};

int main(){
    Myclass<int> intObject(45, 35);

    Myclass<string> stringObject("Varun", "Amit");

    intObject.display();
    stringObject.display();   

    return 0;
}