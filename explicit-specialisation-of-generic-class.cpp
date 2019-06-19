#include <iostream>

using namespace std;

template <class Type> class Myclass{
    Type p1;
public:
    Myclass(Type p){
        cout << "From generic class." << endl;
        p1 = p;
    }

    void display(){  
        cout << p1 << endl;    
    }
};

template <> class Myclass <int>{
    int p1;
public:
    Myclass(int p){
        p1 = p;
        cout << "From specific class." << endl;
    }

    void display(){  
        cout << p1 << endl;    
    }
};

int main(){

    Myclass<int> intObject(45);
    Myclass<float> floatObject(3.64);
    Myclass<string> stringObject("Varun");

    intObject.display();
    stringObject.display();
    floatObject.display();   

    return 0;
}
