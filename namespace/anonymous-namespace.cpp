#include <iostream>

using namespace std;

namespace {
    int i;
    void display();
}

namespace{
    void display(){
        cout << i << endl;
    }
}

int main(){
    i = 20;
    display();

    return 0;
}
