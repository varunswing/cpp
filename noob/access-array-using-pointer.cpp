#include <iostream>

using namespace std;

int main(){
    int number[5] = {23, 43, 42, 84, 92};

    cout << number[4] << endl;
    cout << *(number + 4) << endl;

    return 0;
}
