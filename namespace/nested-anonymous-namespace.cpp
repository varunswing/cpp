#include <iostream>

using namespace std;

namespace {
    int x;
    namespace One{
        int x = 300;
        void display(){
            cout << x << endl;
        }
    }
}

int main(){
    x = 20;
    cout << x << endl;
    One :: display();
    One :: x = 30;
    One :: display();

    return 0;
}
