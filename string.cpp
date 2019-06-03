#include <iostream>

using namespace std;

int main(){
    string name = "Varun";

    string lastname = "Sharma";

    string fullname;

    fullname = name + " " + lastname;

    if (name == "Varun" )
    {   
        cout << "name matched";
    }else
    {
        cout << "name mismatched";
    }

    return 0;
}
