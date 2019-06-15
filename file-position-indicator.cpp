#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream file("varun.txt", ios::out | ios::in);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{               
        cout << file.tellg() << endl;   
        cout << file.tellp() << endl;
        file.seekp(6);
        cout << file.tellg() << endl;
        cout << file.tellp() << endl;    
    }

    return 0;
}
