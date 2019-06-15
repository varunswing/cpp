#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char input[100];
    strcpy(input, "Learning lad rocks.");

    fstream file("varun.txt", ios::out | ios::in | ios::binary | ios::trunc);
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{               
        int length = strlen(input);
        for(i=0; i<=length; i++){
            file.put(input[i]);
        }
        file.seekg(0);
        char ch;

    }