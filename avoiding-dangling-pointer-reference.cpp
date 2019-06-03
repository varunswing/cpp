#include <iostream>

using namespace std;

int main(){
    int *pointer = nullptr;

    pointer = new int;

    if(pointer != nullptr){
        *pointer = 10;
        cout << *pointer << endl;
        delete pointer;
        pointer = nullptr;
    }else
    {
        cout << "Memory not allocated";
    }

    return 0;
}
