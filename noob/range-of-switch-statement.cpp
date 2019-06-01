#include <iostream>

using namespace std;

int main(){
    int x = 30;
    switch (x){
        case 1 ... 99:
            cout << "The number "<< x << " is between 1 and 99.";
            break;

        case 100 ... 199:
            cout << "The number" << x << "is between 100 and 199.";
            break;

        case 200 ... 299:
            cout << "The number" << x << "is between 200 and 299.";
            break;
        
        default:
            cout << "What's your number?";
    }

    cout << endl << "Numbering done.";

    return 0;
}