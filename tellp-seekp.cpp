#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream file("varun.txt", ios::out);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{               
        cout << file.tellp() << endl;                                                                                                       
        file << "Varun is tell me. Hahaha ";
        cout << file.tellp() << endl;
        file.seekp(6, ios::beg);
        file << "is awesome.";
        cout << file.tellp() << endl;
    }

    return 0;
}
