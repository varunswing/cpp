#include <iostream>

using namespace std;

template <typename myType> void display(myType x){
    cout << "You have pass " << x << endl;
}

int main(){
    display(4);
    display("Varun");
    display(2.34);    

    return 0;
}