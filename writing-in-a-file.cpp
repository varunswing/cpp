#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream file("varun.txt");
    
    if(!file.is_open()){
        cout << "File not opening." << endl;
    }else{
        file << "Hi I am Varun." << endl;
        file << "I have created it." << endl;
        cout << "File opened successfully." << endl;

        file.close();
    }
    

    return 0;
}
