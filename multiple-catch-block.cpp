#include <iostream>

using namespace std;

int main(){

    try{
        throw runtime_error ("Divide by zero");

    }catch(runtime_error e){
        cout << e.what() << endl;
    }catch(const char *err){
        cout << err << endl;
    }catch(int error){
        cout << error << endl;
    }catch(...){
        cout << "some error occured";
    }

    return 0;
}
