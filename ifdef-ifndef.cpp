#include <iostream>
#define Windows 1

using namespace std;

int main(){
    #ifdef Windows
        cout << "Windows user" << endl;
    #endif
    #ifndef Windows
        cout << "Linux user";
    #else
        cout << "Mac user";
    #endif   

    return 0;
}
