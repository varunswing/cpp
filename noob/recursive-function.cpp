#include <iostream>

using namespace std;

int factorial(int a);

int main(){
    cout << factorial(5) << endl;
    return 0;
}

int factorial(int a){
    if (a == 1){
        return 1;
    }else{
        return a*factorial(a-1);
    }
    
}
