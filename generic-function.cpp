#include <iostream>

using namespace std;

template <typename T> void display(T x, T y);
template <typename T> T maxi(T x, T y);

int main(){
    display(4, 6);
    display("Varun", "Amit");
    display(2.34, 3.52);    

    cout << maxi(3, 4) << endl;
    cout << maxi(2.34333, 44.244) << endl;
    return 0;
}

template <typename T> void display(T x, T y){
    cout << y << " and " << x << endl;
}

template <class T> T maxi(T x, T y){
    return (x >= y) ? x : y;
}