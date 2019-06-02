#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
}varun, pari;

int main(){
    student rahul, guddu = {1111, 'm'};

    rahul.rollno = 2222;
    rahul.sex = 'm';

    cout << rahul.rollno << endl << rahul.sex;
    return 0;
}