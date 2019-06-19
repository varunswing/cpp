#include <iostream>

using namespace std;

template <typename T1, typename T2> void display(T1 x, T2 y);
template <typename T> void display(T x);

int main(){
    display(4, 6.831);
    display("Varun", "Amit");
    display(2.34);    
    return 0;
}

template <typename T1, typename T2> void display(T1 x, T2 y){
    cout << "Generic function with two parameter." << endl;
    cout << y << " and " << x << endl;
}

template <typename T> void display(T x){
    cout << "Generic function with one parameter." << endl;
    cout << x << endl;
}