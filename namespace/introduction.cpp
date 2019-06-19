#include <iostream>

using namespace std;

#include "file_one.cpp"
#include "file_two.cpp"

int main(){
    using namespace One;  
    using namespace Two;
    display();
    play();

    return 0;
}
