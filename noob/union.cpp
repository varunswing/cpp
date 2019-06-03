#include <iostream>

using namespace std;

union student{
    int rollno;
    char sex;
}varun, pari;

int main(){
    student rahul, guddu;

    rahul.rollno = 2222;    

    cout << rahul.rollno << endl ;
    return 0;
}