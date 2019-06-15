#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file("varun.txt", ios::in);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{
        cout << file.tellg() << endl;
        file.seekg(5);
        string line;
        while (file.good()){
            getline(file, line);
            cout << line << endl;
        }
    }

    return 0;
}
