#include <iostream>
#include <iomanip>

using namespace std;

ostream &rightArrow(ostream &output){
    output << "Cool man name is ---> ";
    return output;

}

istream &getName(istream &input){
    cout << "Enter your name please" << endl;
    return input;   
}

int main(){
    string name;
    cin >> getName >> name;
    cout << rightArrow << name;

    return 0;
}
