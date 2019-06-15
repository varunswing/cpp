#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

int main(){
    char input[100];
    strcpy(input, "Learning lad rocks.");

    fstream file("varun.bin", ios::out | ios::in | ios::binary | ios::trunc);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{               
        int length = strlen(input);
        for(int i=0; i<=length; i++){
            file.put(input[i]);
        }
        file.seekg(0);
        char ch;
        while(file.good()){
            file.get(ch);
            cout << ch;
        }
    }
}