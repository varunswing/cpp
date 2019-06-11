#include <iostream>

using namespace std;

void test() throw(int, char, runtime_error){
    throw runtime_error("What the hack.");
}

int main(){

    try{
        test();
    }catch(runtime_error r){
        cout << "runtime exception type " << r.what() << endl;
    }catch(char c){
        cout << "char type " << c << endl;
    }catch(int i){
        cout << "integer type " << i << endl;
    }

    return 0;
}
