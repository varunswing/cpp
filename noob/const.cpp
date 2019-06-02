#include <iostream>

using namespace std;

void display(const int num[], int limit); 
int main(){
    int number[] = {22, 43, 32, 76, 73};
    display(number, 5);
    return 0;
}

void display(const int num[], int limit){

    for(int i = 0; i < limit; i++){
    cout << num[i] << endl;
    }
}