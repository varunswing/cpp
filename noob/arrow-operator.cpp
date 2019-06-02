#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
};

int main(){
    student varun;
    student *varunptr;

    varunptr = &varun;

    varun.rollno = 2222;
    varunptr -> sex = 'm';

    cout << varunptr -> rollno << endl << varun.sex;
    return 0;
}