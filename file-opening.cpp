#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream file;

    file.open("varun.txt", ios :: in | ios :: out | ios :: trunc);

    if(!file){
        cout << "File not opening." << endl;
    }else{
        cout << "File opened successfully." << endl;

        file.close();
    }
    

    return 0;
}
