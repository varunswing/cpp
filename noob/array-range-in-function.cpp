#include <iostream>

using namespace std;

void display(const int *start, const int *end); 
int main(){
    int number[] = {22, 43, 32, 76, 73, 52, 62, 86, 38};
    display(number, number+3);
    return 0;
}

void display(const int *start, const int *end){
    const int *ptr;
    for(ptr = start; ptr != end; ptr++){
    cout << *ptr << endl;
    }
}