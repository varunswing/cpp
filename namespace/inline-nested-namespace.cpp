#include <iostream>

using namespace std;

namespace AppVersion{
    namespace Version1{
        void display(){
            cout << "display function from version 1" << endl;
        }
    }
    inline namespace Version2{
        void display(){
            cout << "Display function from version 2." << endl;
        }
    }
    namespace Version3{
        void display(){
            cout << "Display function from version 3." << endl;
        }
    }
    namespace Version2{
        void whatsup(){
            cout << "Whatsup function from version 1." << endl;
        }
    }
};

int main(){
    AppVersion :: Version3 :: display();
    AppVersion :: display();
    AppVersion :: whatsup();

    return 0;
}
