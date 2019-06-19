#include <iostream>

using namespace std;

template <class Type1, class Type2> class Myclass{
    Type1 p1;
    Type2 p2;
    int i;

public:
    Myclass(Type1 x, Type2 y){
        p1 = x;
        p2 = y;
        i = 100;
    }

    void display(){  
        cout << p1 << ", " << p2 << " and " << i << endl;    
    }
};

int main(){
    Myclass<int, string> intObject(45, "Varun");

    Myclass<string, string> stringObject("Varun", "Amit");

    intObject.display();
    stringObject.display();   

    return 0;
}