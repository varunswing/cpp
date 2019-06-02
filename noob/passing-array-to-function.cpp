#include <iostream>

using namespace std;

void show(int [], int); 

int main(){
    int number[] = {25, 44, 66, 98, 735};
    int length = 5;

    show(number, length);
}

void show(int number[], int length){    
    for(int i = 0; i < length; i++){
        cout << number[i] << endl;
    }
}