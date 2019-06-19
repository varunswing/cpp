#include <iostream>

using namespace std;

template <class Type1, class Type2 = int> class Myclass{
    Type1 p1;
    Type2 p2;

public:
    Myclass(Type1 x, Type2 y){
        p1 = x;
        p2 = y;
    }

    void display(){  
        cout << p1 << ", " << p2 << endl;    
    }
};

int main(){

    Myclass<int, string> intObject(45, "Varun");
    Myclass<float, float> floatObject(3.64, 5.43);
    Myclass<string> stringObject("Varun", 5);

    intObject.display();
    stringObject.display();
    floatObject.display();   

    return 0;
}