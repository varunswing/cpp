#include <iostream>

using namespace std;

int main(){

    try{
        try{
            throw "a character exception";
        }catch(const char *e){
            cout << "character type in inner block --> " << e << endl;
            cout << "rethrowing exception " << endl;
            throw runtime_error("akjlfa");
        }

    }catch(const char *e){
        cout << "character type in inner block --> " << e << endl;
    }catch(...){
        cout << "some error occured";
    }

    return 0;
}
