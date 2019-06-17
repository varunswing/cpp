#include <iostream>
#include <sstream>


using namespace std;

int main(){
    string input = "44";

    stringstream sso;
    sso << input;
    int number;
    sso >> number;
    cout << input+"3" << endl;
    cout << number+3 << endl;

    return 0;
}