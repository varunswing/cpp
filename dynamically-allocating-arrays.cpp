#include <iostream>

using namespace std;

int main(){
    int *pointer = NULL;

    cout << "How many items you are gonna input?" << endl;
    int input;
    cin >> input;

    pointer = new int[input];

    int temp;

    for(int i=0; i<input; i++){
    cout << "Enter the item " << i+1 << endl;
    cin >> temp;

    *(pointer + i) = temp;
    }

    cout << "The items you entered are -> " << endl;
    for(int i=0; i<input; i++){
    cout << i + 1 << ". " << *(pointer + i) << endl;
    }

    delete []pointer;

    return 0;
}
