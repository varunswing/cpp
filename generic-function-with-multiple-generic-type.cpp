#include <iostream>

using namespace std;

template <typename T1, typename T2> void display(T1 x, T2 y);

int main(){
    display(4, 6.831);
    display("Varun", "Amit");
    display(2.34, 3.52);    
    return 0;
}

template <typename T1, typename T2> void display(T1 x, T2 y){
    cout << y << " and " << x << endl;
}