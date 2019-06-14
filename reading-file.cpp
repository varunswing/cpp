#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file;

    file.open("varun.txt");
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{
        cout << "File contents are -->" << endl;
        string line;
        while (file.good()){
            getline(file, line);
            cout << line << endl;
        }
    }
    

    return 0;
}
