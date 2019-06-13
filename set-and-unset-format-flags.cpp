#include <iostream>

using namespace std;

int main(){
    cout.setf(ios :: showpoint, ios :: showpos);
    cout.unsetf(ios :: showpoint);
    auto flag = ios :: showpoint | ios :: showpos | ios :: showbase;
    cout.flags(flag);
    cout << 200.3 << endl;
    cout << -399.34 << endl;
    cout << 45.6 << endl;

    return 0;
}
