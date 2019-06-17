#include <iostream>
#define Windows 1
#define Mac 2
#define Linux 3

#define OS Mac

using namespace std;

int main(){
    #if OS == Windows
        cout << "Windows user";
    #elif OS == Mac
        cout << "Mac user";
    #else
        cout << "Linux user";
    #endif   

    return 0;
}
