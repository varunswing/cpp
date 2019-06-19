#include <iostream>

using namespace std;

template <typename T> void display(T x);
template <> void display<int>(int x);

int main(){
    display(4);
    display("Varun");
    display(2.34);    
    return 0;
}

template <typename T> void display(T x){
    cout << "Inside what you got generic function." << endl;
    cout << "I got = " << x << endl;
}

template <>void display<int>(int x){
    cout << "Inside what you got normal function." << endl;
    cout << "I got = " << x << endl;
}