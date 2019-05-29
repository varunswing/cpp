#include <iostream>

using namespace std;

int display(int, int); 

int main(){
    int result;
    result = display(10, 20);
    cout << "result is " << result;
}

int display(int a, int b){
    cout << a << endl;
    cout << b << endl;
    return a + b;
}