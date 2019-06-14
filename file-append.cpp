#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream file("varun.txt", ios::in | ios::out | ios::app);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{
        cout << "File opened successfully." << endl;
        cout << "Writing to file." << endl;

        file << "Hi I am Varun." << endl;

        file.seekg(0);
        cout << "reading from file." << endl;
        string line;
        while (file.good()){
            getline(file, line);
            cout << line << endl;
        }
    }

    return 0;
}
