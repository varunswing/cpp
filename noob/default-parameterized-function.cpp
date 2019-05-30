#include <iostream>

using namespace std;

int display(int a, int b, int c = 20){ 
    cout << a << endl;
    cout << b << endl;
    cout << c;
}

int main(){
    display(10, 20);
}
