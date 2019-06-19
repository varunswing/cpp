#include <iostream>

using namespace std;

namespace One{
    int i;
    namespace Two{
    int j;
    }
}

int main(){
    One :: Two :: j = 10;
    One :: i = 23;

    using namespace One;
    using namespace Two;

    cout << i << endl << j;

    return 0;
}
