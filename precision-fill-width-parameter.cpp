#include <iostream>

using namespace std;

int main(){

    cout.precision(4);
    cout << 123.456 << endl;

    cout.width(10);
    cout << "Hi" << endl;
    cout.width(10);
    cout << 123.456 << endl;

    cout.fill('*');

    cout.width(10);
    cout << "Hi" << endl;
    cout.width(10);
    cout << 123.456 << endl;

    cout.setf(ios :: left);
    cout.width(10);
    cout << "Hi" << endl;
    cout.width(10);
    cout << 123.456 << endl;

    return 0;
}
